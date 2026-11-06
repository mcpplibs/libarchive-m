// The module's functions over compat.libarchive: archives written to memory in
// several formats and filters and read back entry by entry, the entry
// metadata, the automatic format detection, the refusal of garbage, and the
// version against its macros.
import std;
import mcpplibs.mwrap.libarchive;

namespace m = mcpplibs::mwrap::libarchive::macros;

struct File {
    std::string path, data;
};

// One archive in memory: `format` and `filter` are libarchive's names ("pax", "gzip" …).
static std::string write(const char* format, const char* filter, const std::vector<File>& files)
{
    std::string out(1 << 20, '\0');
    std::size_t used = 0;
    archive* a = archive_write_new();
    archive_write_set_format_by_name(a, format);
    if (filter) archive_write_add_filter_by_name(a, filter);
    if (archive_write_open_memory(a, out.data(), out.size(), &used) != m::ARCHIVE_OK) return {};
    for (const File& f : files) {
        archive_entry* e = archive_entry_new();
        archive_entry_set_pathname(e, f.path.c_str());
        archive_entry_set_size(e, static_cast<la_int64_t>(f.data.size()));
        archive_entry_set_filetype(e, m::AE_IFREG);
        archive_entry_set_perm(e, 0644);
        archive_entry_set_mtime(e, 1700000000, 0);
        archive_write_header(a, e);
        archive_write_data(a, f.data.data(), f.data.size());
        archive_entry_free(e);
    }
    archive_write_close(a);
    archive_write_free(a);
    out.resize(used);
    return out;
}

// Every entry of an archive in memory, with its format and filter as detected.
static std::vector<File> read(const std::string& bytes, std::string& format, std::string& filter)
{
    std::vector<File> files;
    archive* a = archive_read_new();
    archive_read_support_filter_all(a);
    archive_read_support_format_all(a);
    if (archive_read_open_memory(a, bytes.data(), bytes.size()) == m::ARCHIVE_OK) {
        archive_entry* e;
        while (archive_read_next_header(a, &e) == m::ARCHIVE_OK) {
            File f{archive_entry_pathname(e), std::string(static_cast<std::size_t>(archive_entry_size(e)), '\0')};
            archive_read_data(a, f.data.data(), f.data.size());
            files.push_back(std::move(f));
        }
        format = archive_format_name(a);
        filter = archive_filter_count(a) > 1 ? archive_filter_name(a, 0) : "none";
    }
    archive_read_free(a);
    return files;
}

int main()
{
    int failures = 0;
    auto check = [&](bool ok, std::string_view what) {
        std::println("{} {}", ok ? "ok  " : "FAIL", what);
        failures += ok ? 0 : 1;
    };

    std::string big;
    for (int i = 0; i < 2000; ++i) big += std::format("line {}\n", i);
    const std::vector<File> files{{"hello.txt", "hello, archive\n"}, {"dir/big.txt", big}, {"empty", ""}};

    // Format and filter combinations, each detected on reading. A pax archive
    // that needs no extended header reads as ustar, and "cpio" writes odc.
    struct Case { const char* format; const char* filter; std::string_view detected; };
    for (const Case c : {Case{"pax", "gzip", "POSIX"}, Case{"ustar", "xz", "POSIX ustar format"},
                         Case{"cpio", "zstd", "POSIX octet-oriented cpio"}, Case{"zip", nullptr, "ZIP"},
                         Case{"7zip", nullptr, "7-Zip"}, Case{"gnutar", "bzip2", "GNU tar format"}}) {
        const std::string bytes = write(c.format, c.filter, files);
        std::string format, filter;
        const auto back = read(bytes, format, filter);
        const bool same = back.size() == files.size()
            && std::ranges::equal(back, files, [](const File& a, const File& b) { return a.path == b.path && a.data == b.data; });
        check(!bytes.empty() && same && format.starts_with(c.detected) && (c.filter ? filter == c.filter : true),
              std::format("{} + {}: {} bytes, read back as {} / {}", c.format, c.filter ? c.filter : "none", bytes.size(),
                          format, filter));
    }

    // Entry metadata.
    archive_entry* e = archive_entry_new();
    archive_entry_set_pathname(e, "a/b.txt");
    archive_entry_set_mode(e, m::AE_IFREG | 0640);
    archive_entry_set_uid(e, 1000);
    archive_entry_set_uname(e, "builder");
    archive_entry* copy = archive_entry_clone(e);
    check(std::string_view(archive_entry_pathname(copy)) == "a/b.txt" && archive_entry_filetype(copy) == m::AE_IFREG
              && (archive_entry_perm(copy) & 0777) == 0640 && archive_entry_uid(copy) == 1000
              && std::string_view(archive_entry_uname(copy)) == "builder", "an entry's metadata survives a clone");
    archive_entry_free(copy);
    archive_entry_free(e);

    // Garbage is refused with a message.
    archive* a = archive_read_new();
    archive_read_support_format_all(a);
    archive_read_support_filter_all(a);
    const char garbage[] = "this is not an archive at all, not even close";
    archive_entry* entry;
    const bool refused = archive_read_open_memory(a, garbage, sizeof garbage) != m::ARCHIVE_OK
        || archive_read_next_header(a, &entry) == m::ARCHIVE_FATAL;
    check(refused && archive_error_string(a) != nullptr, std::format("garbage is refused: {}",
          archive_error_string(a) ? archive_error_string(a) : "(no message)"));
    archive_read_free(a);

    check(archive_version_number() == m::ARCHIVE_VERSION_NUMBER
              && std::string_view(archive_version_string()) == m::ARCHIVE_VERSION_STRING, "the library is the headers' version");
    std::println("{}", archive_version_details());
    std::println("{} failures", failures);
    return failures != 0;
}
