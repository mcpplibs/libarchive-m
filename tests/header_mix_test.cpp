// The headers and the module in one translation unit: the same entities, so an
// archive object created through one spelling is freed through the other.
#define LIBARCHIVE_STATIC
#include <archive.h>
#include <archive_entry.h>
import std;
import mcpplibs.mwrap.libarchive;

int main()
{
    struct archive* a = ::archive_write_new();                          // the header's declaration
    const bool format = archive_write_set_format_pax(a) == ARCHIVE_OK;  // the module's
    const bool freed = archive_write_free(a) == ARCHIVE_OK;
    const bool same = &::archive_entry_new == &archive_entry_new;
    std::println("{}", format && freed && same ? "header and module agree" : "FAIL");
    return format && freed && same ? 0 : 1;
}
