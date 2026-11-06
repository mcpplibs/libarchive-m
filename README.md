# libarchive

> libarchive, the multi-format archive and compression library, through C++23 modules.

**English** · [简体中文](README.zh.md) · [Upstream](https://github.com/libarchive/libarchive) · [Releases](https://github.com/mcpplibs/libarchive-m/releases) · [mcpp](https://github.com/mcpp-community/mcpp) · [Index](https://github.com/mcpplibs/mcpp-index)

[![C++23](https://img.shields.io/badge/C%2B%2B-23-blue.svg)](https://en.cppreference.com/w/cpp/23)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](LICENSE)
[![mcpp-community](https://img.shields.io/badge/mcpp--community-mwrap-blue)](https://github.com/mcpp-community)
[![CI](https://github.com/mcpplibs/libarchive-m/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/mcpplibs/libarchive-m/actions/workflows/ci.yml)

The upstream API is unchanged. `archive_read_new`, `archive_write_open_memory`,
`archive_read_next_header`, `archive_entry_pathname`, `struct archive` and
`struct archive_entry` are the upstream entities of `<archive.h>` and
`<archive_entry.h>`, in the global namespace where upstream declares them. The
library is `compat.libarchive` 3.8.7, with zlib, bzip2, liblzma, lz4 and zstd.
The constant macros are C++ constants. Upstream's own test suite (702 tests)
runs on every CI run over the same library.

## Modules

- `import mcpplibs.mwrap.libarchive;`: every function and type of `<archive.h>` and `<archive_entry.h>`, re-exporting the macros module
- `import mcpplibs.mwrap.libarchive.macros;`: `ARCHIVE_OK`, `ARCHIVE_EOF`, `ARCHIVE_FATAL`, `ARCHIVE_FORMAT_*`, `ARCHIVE_FILTER_*`, `ARCHIVE_EXTRACT_*`, `AE_IFREG`, `ARCHIVE_ENTRY_ACL_*`, `ARCHIVE_VERSION_NUMBER` … in `mcpplibs::mwrap::libarchive::macros`

> More Modules API -> [Usage and API](docs/usage.md)

## Getting started

```sh
mcpp new bundle --template mcpplibs.mwrap.libarchive@3.8.7
cd bundle
mcpp run
```

The default template writes a tar.gz of three files in memory and lists it;
`mcpp run -- <archive>` lists any archive libarchive reads.

```toml
[dependencies]
"mcpplibs.mwrap.libarchive" = "3.8.7"
```

```cpp
import std;
import mcpplibs.mwrap.libarchive;

namespace la = mcpplibs::mwrap::libarchive::macros;

int main(int argc, char** argv) {
    archive* a = archive_read_new();
    archive_read_support_filter_all(a);
    archive_read_support_format_all(a);
    archive_entry* e;
    if (archive_read_open_filename(a, argv[1], 10240) == la::ARCHIVE_OK)
        while (archive_read_next_header(a, &e) == la::ARCHIVE_OK)
            std::println("{}", archive_entry_pathname(e));
    archive_read_free(a);
}
```

## Scope and macros

The module exports every function of both headers: 453, and on Windows two
more that only Windows declares (`archive_read_open_filenames_w`,
`archive_entry_copy_bhfi`). The declarations are those of the static library
(`LIBARCHIVE_STATIC`), which the module defines before the headers.

A named module cannot export a macro. The constants are `inline constexpr`
of the same names in `mcpplibs::mwrap::libarchive::macros`. The headers define
no macro with arguments for a user, so `<mwrap/libarchive/macros.hpp>` is empty
in this release. A macro expands even in a qualified name. A unit that includes
`<archive.h>` beside the module reads the constants through the header's
macros ([docs/usage.md](docs/usage.md)).

## Build and testing

Linux, macOS and Windows CI build the modules with GCC and LLVM and run the
tests: pax with gzip, ustar with xz, cpio with zstd, gnutar with bzip2, ZIP
and 7-Zip written to memory and read back with their format and filter
detected, entry metadata through a clone, the refusal of garbage, the version
against its macros, every constant against its macro, every exported function
linked, and header mixing. CI also runs:

- the export audit ([tools/generate.py](tools/generate.py) `--check`): the
  module, the macro mapping, the macro header and the generated tests are
  regenerated from the headers as clang reads them and compared, and on macOS
  and Windows every name the headers declare there is exported;
- upstream's test suite over the same library
  ([tools/run_conformance.py](tools/run_conformance.py)); one test fails by
  compat.libarchive's configuration and is listed with its reason.

A separate job scaffolds the default template as an installed package and runs
it.

## License

[Apache-2.0](LICENSE) for the wrapper, by mcpp-community ([NOTICE](NOTICE)).
libarchive remains under the BSD 2-Clause license with the exceptions its
summary lists ([upstream/libarchive/COPYING](upstream/libarchive/COPYING),
[README](upstream/libarchive/README.md)).
