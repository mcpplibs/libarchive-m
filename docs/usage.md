# Usage and API

`mcpplibs.mwrap.libarchive` 3.8.7 exports libarchive's public API, upstream's
names unchanged. This page lists what each module holds and the places where a
module and a header differ. [tools/generate.py](../tools/generate.py) writes the
lists from the headers, and CI checks them on every target.

## Modules

| Module | Holds |
|---|---|
| `mcpplibs.mwrap.libarchive` | `<archive.h>`: `struct archive`; reading (`archive_read_new`, `archive_read_support_filter_*`, `archive_read_support_format_*`, `archive_read_open_*`, `archive_read_next_header`, `archive_read_data*`, `archive_read_extract*`, `archive_read_set_*option*`, passphrases); writing (`archive_write_new`, `archive_write_set_format_*`, `archive_write_add_filter_*`, `archive_write_open_*`, `archive_write_header`, `archive_write_data*`); disk access (`archive_write_disk_*`, `archive_read_disk_*`); matching (`archive_match_*`); errors and status (`archive_errno`, `archive_error_string`, `archive_format_name`, `archive_filter_*`); `archive_version_*`; the callback types and `la_int64_t`, `la_ssize_t`. `<archive_entry.h>`: `struct archive_entry` and every `archive_entry_*` accessor, ACLs, extended attributes, sparse maps, `archive_entry_linkresolver`. Re-exports the macros module |
| `mcpplibs.mwrap.libarchive.macros` | in `mcpplibs::mwrap::libarchive::macros`: the status codes (`ARCHIVE_EOF`, `ARCHIVE_OK`, `ARCHIVE_RETRY`, `ARCHIVE_WARN`, `ARCHIVE_FAILED`, `ARCHIVE_FATAL`); `ARCHIVE_FILTER_*`, `ARCHIVE_COMPRESSION_*` and `ARCHIVE_FORMAT_*`; `ARCHIVE_EXTRACT_*`, `ARCHIVE_READDISK_*`, `ARCHIVE_MATCH_*`; `AE_IF*` file types and `AE_SYMLINK_TYPE_*`; `ARCHIVE_ENTRY_ACL_*`; `ARCHIVE_VERSION_NUMBER`, `ARCHIVE_VERSION_ONLY_STRING`, `ARCHIVE_VERSION_STRING` |

`archive_read_open_filenames_w` and `archive_entry_copy_bhfi` are declared on
Windows only and are exported there. The functions that upstream marks
deprecated for 4.0 are declared in 3.8.7 and are exported.

## Configuration

`compat.libarchive` builds a static library (`LIBARCHIVE_STATIC`) with zlib,
bzip2, liblzma, lz4 and zstd, its bundled BLAKE2, and every format. External
filter programs (`lrzip`, `lzop`, `grzip`, `lzip` through a program) are run
when the system has them. The character set of every locale is UTF-8. The
module defines `LIBARCHIVE_STATIC` before the headers; on Windows the
declarations would otherwise import from a DLL. A unit that includes
`<archive.h>` itself defines it too (tests/header_mix_test.cpp does).

## Macros

- **Constants.** Each object-like macro whose expansion is a constant
  expression is an `inline constexpr` of the same name and value;
  tests/macros.cpp compares every one with its macro. `AE_IF*` keep upstream's
  type (`__LA_MODE_T`: `mode_t`, or `unsigned short` on Windows).
- **Declaration syntax.** The `__LA_*` macros (linkage, deprecation, the
  portable `time_t`, `mode_t` and `dev_t` spellings) are reserved names and are
  not offered. The headers define no macro with arguments for a user;
  `<mwrap/libarchive/macros.hpp>` is empty in this release.

## A header beside the module

`#include <archive.h>` and `import mcpplibs.mwrap.libarchive;` may appear in
one unit: they declare the same entities. A macro expands even inside a
qualified name, so `mcpplibs::mwrap::libarchive::macros::ARCHIVE_OK` written
after the header is `...::macros::0`. In such a unit use the header's macros,
or read their values under other names and `#undef` the macros before naming
the constants (tests/macros.cpp does this).

## Conformance

tools/run_conformance.py builds libarchive's own `libarchive/test` (312
sources, 702 tests) with upstream's `test_main.c` over `compat.libarchive` and
runs it against the release's reference files. One test fails by
configuration and is expected: `test_archive_string_conversion_fail_c`
expects a conversion to the C locale's ASCII to fail, and `compat.libarchive`
answers UTF-8 for every locale.
