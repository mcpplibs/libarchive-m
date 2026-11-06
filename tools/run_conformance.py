#!/usr/bin/env python3
"""Run libarchive's own test suite (libarchive/test of the release) against
compat.libarchive 3.8.7, the library this wrapper exports.

The release tarball is downloaded once into target/upstream and checked
against upstream/documents.json. libarchive/test and test_utils are copied
unchanged into target/conformance; a project there builds the 312 test
sources with upstream's test_main.c over compat.libarchive, as C, with the
configuration compat.libarchive compiles with (config.h names it) and the
test list upstream's build generates (list.h, every DEFINE_TEST). The program
runs every test against the reference files of libarchive/test.

EXPECTED lists the tests that fail because of how compat.libarchive is
configured, with the reason; any other failure, or an expected failure that
passes, fails the run.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tarfile
import tempfile
import urllib.request

MANIFEST = '''[package]
name        = "libarchive-conformance"
version     = "3.8.7"
description = "libarchive 3.8.7's test suite over compat.libarchive (tools/run_conformance.py)"

[targets.libarchive_test]
kind = "bin"
main = "test_utils/test_main.c"

[build]
c_standard   = "c11"
sources      = ["test/*.c", "test_utils/test_utils.c"]
include_dirs = ["test", "test_utils"]
cflags       = ["-DHAVE_CONFIG_H", "-D_GNU_SOURCE", "-DLIBARCHIVE_STATIC", "-DLIST_H"]

[dependencies]
compat.libarchive = "3.8.7"
'''

# compat.libarchive answers every locale's character set with UTF-8 (its
# localcharset.h), so a conversion that upstream expects to fail under the C
# locale's ASCII succeeds.
EXPECTED = {
    'test_archive_string_conversion_fail_c': 'every locale is UTF-8 in compat.libarchive',
}


def fetch(root: Path) -> Path:
    pins = json.loads((root / 'upstream/documents.json').read_text(encoding='utf-8'))
    cache = root / 'target/upstream'
    cache.mkdir(parents=True, exist_ok=True)
    archive = cache / 'libarchive-release.tar.gz'
    if not archive.exists() or hashlib.sha256(archive.read_bytes()).hexdigest() != pins['upstream_sha256']:
        print('+ fetch', pins['upstream'], flush=True)
        with urllib.request.urlopen(pins['upstream'], timeout=120) as response:
            archive.write_bytes(response.read())
    digest = hashlib.sha256(archive.read_bytes()).hexdigest()
    if digest != pins['upstream_sha256']:
        sys.exit(f'upstream archive checksum {digest} != {pins["upstream_sha256"]}')
    with tarfile.open(archive) as tar:
        top = tar.getmembers()[0].name.split('/')[0]
        if not (cache / top).exists():
            tar.extractall(cache, filter='data')
    return cache / top


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--mcpp', default='mcpp')
    parser.add_argument('--toolchain')
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    upstream = fetch(root)
    work = root / 'target/conformance'
    shutil.rmtree(work, ignore_errors=True)
    shutil.copytree(upstream / 'libarchive/test', work / 'test')
    shutil.copytree(upstream / 'test_utils', work / 'test_utils')
    tests = sorted({m.group(0) for p in (work / 'test').glob('*.c')
                    for m in re.finditer(r'^DEFINE_TEST\(\w+\)', p.read_text(encoding='utf-8', errors='replace'), re.M)})
    (work / 'test/list.h').write_text('\n'.join(tests) + '\n', encoding='utf-8')
    (work / 'test/config.h').write_text('#include "mcpp_libarchive_config.h"\n', encoding='utf-8')
    (work / 'mcpp.toml').write_text(MANIFEST, encoding='utf-8')
    build = [args.mcpp, 'build', '--release']
    if args.toolchain:
        build += ['--toolchain', args.toolchain]
    print('+', ' '.join(build), flush=True)
    subprocess.run(build, cwd=work, check=True)
    program = next(p for p in (work / 'target').rglob('libarchive_test*') if p.is_file() and p.suffix in ('', '.exe'))
    scratch = Path(tempfile.mkdtemp(prefix='libarchive-test-'))
    command = [program, '-r', work / 'test', '-q']
    print('+', ' '.join(map(str, command)), flush=True)
    run = subprocess.run(command, cwd=scratch, capture_output=True, text=True, errors='replace')
    print(run.stdout[-4000:], run.stderr[-2000:], sep='\n', flush=True)
    failed = set(re.findall(r'^\s*\d+: (\w+) \(', run.stdout, flags=re.M))
    unexpected = sorted(failed - set(EXPECTED))
    fixed = sorted(set(EXPECTED) - failed)
    for name in unexpected:
        print('unexpected failure:', name)
    for name in fixed:
        print('expected to fail, passed (remove it from EXPECTED):', name)
    print(f'libarchive 3.8.7: {len(tests)} tests, {len(failed)} failed, {len(failed & set(EXPECTED))} of them expected',
          flush=True)
    if not unexpected and not fixed:
        shutil.rmtree(scratch, ignore_errors=True)
    return 1 if unexpected or fixed or (run.returncode != 0 and not failed) else 0


if __name__ == '__main__':
    sys.exit(main())
