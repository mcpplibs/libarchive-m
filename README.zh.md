# libarchive

> libarchive——多格式归档与压缩库，以 C++23 模块提供。

[English](README.md) · **简体中文** · [上游](https://github.com/libarchive/libarchive) · [发布](https://github.com/mcpplibs/libarchive-m/releases) · [mcpp](https://github.com/mcpp-community/mcpp) · [索引](https://github.com/mcpplibs/mcpp-index)

[![C++23](https://img.shields.io/badge/C%2B%2B-23-blue.svg)](https://en.cppreference.com/w/cpp/23)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](LICENSE)
[![mcpp-community](https://img.shields.io/badge/mcpp--community-mwrap-blue)](https://github.com/mcpp-community)
[![CI](https://github.com/mcpplibs/libarchive-m/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/mcpplibs/libarchive-m/actions/workflows/ci.yml)

上游 API 不变：`archive_read_new`、`archive_write_open_memory`、`archive_read_next_header`、`archive_entry_pathname`、
`struct archive` 与 `struct archive_entry` 都是 `<archive.h>` 与 `<archive_entry.h>` 中的上游实体，位于上游声明它们的全局
命名空间。库本身是带 zlib、bzip2、liblzma、lz4 与 zstd 的 `compat.libarchive` 3.8.7；常量宏映射为 C++ 常量。每次 CI 都在
同一份库上运行上游自己的测试套件（702 个测试）。

## 模块

- `import mcpplibs.mwrap.libarchive;`：`<archive.h>` 与 `<archive_entry.h>` 的全部函数与类型，并重新导出宏模块
- `import mcpplibs.mwrap.libarchive.macros;`：`ARCHIVE_OK`、`ARCHIVE_EOF`、`ARCHIVE_FATAL`、`ARCHIVE_FORMAT_*`、`ARCHIVE_FILTER_*`、`ARCHIVE_EXTRACT_*`、`AE_IFREG`、`ARCHIVE_ENTRY_ACL_*`、`ARCHIVE_VERSION_NUMBER` 等，位于 `mcpplibs::mwrap::libarchive::macros`

> 更多模块 API -> [用法与 API](docs/usage.md)

## 快速开始

```sh
mcpp new bundle --template mcpplibs.mwrap.libarchive@3.8.7
cd bundle
mcpp run
```

默认模板在内存中写出含三个文件的 tar.gz 并列出其内容；`mcpp run -- <archive>` 列出 libarchive 能读取的任何归档。

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

## 范围与宏

模块导出两个头文件的全部函数：共 453 个，在 Windows 上另有只在 Windows 上声明的两个（`archive_read_open_filenames_w`、
`archive_entry_copy_bhfi`）。声明是静态库形式（`LIBARCHIVE_STATIC`），模块在包含头文件之前定义它。

命名模块不能导出宏。常量映射为 `mcpplibs::mwrap::libarchive::macros` 中同名的 `inline constexpr`。头文件没有面向使用者的
带参数宏，因此本版本的 `<mwrap/libarchive/macros.hpp>` 为空。宏在限定名中也会展开。同时包含 `<archive.h>` 的翻译单元经
头文件的宏读取常量（[docs/usage.md](docs/usage.md)）。

## 构建与测试

Linux、macOS、Windows 的 CI 用 GCC 与 LLVM 构建模块并运行测试：pax 加 gzip、ustar 加 xz、cpio 加 zstd、gnutar 加 bzip2、
ZIP 与 7-Zip 写入内存后读回并识别格式与过滤器，经克隆保留的条目元数据，无效输入被拒绝，版本同其宏相等，每个常量同其宏
相等，每个导出函数都能链接，头文件混用。CI 还运行：

- 导出审计（[tools/generate.py](tools/generate.py) `--check`）：按 clang 读到的头文件重新生成模块、宏映射、宏头文件与
  生成的测试并逐字节比较；在 macOS 与 Windows 上检查头文件在该平台声明的每个名字都已导出；
- 在 Linux 上于同一份库运行上游的测试套件（[tools/run_conformance.py](tools/run_conformance.py)）；其中一个测试因
  compat.libarchive 的配置而失败，已连同原因列出。测试源码需要上游构建为各宿主生成的配置，compat.libarchive 不为 macOS
  与 Windows 生成这种配置。

另一个作业把默认模板当作已安装的包生成项目并运行。

## 许可

包装部分为 [Apache-2.0](LICENSE)，作者 mcpp-community（[NOTICE](NOTICE)）。libarchive 仍遵循 BSD 2-Clause 许可及其摘要
列出的例外（[upstream/libarchive/COPYING](upstream/libarchive/COPYING)、[README](upstream/libarchive/README.md)）。
