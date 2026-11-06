// mcpplibs.mwrap.libarchive.macros --- the macros of the headers that are a constant or a
// type, under their original names in mcpplibs::mwrap::libarchive::macros, each equal to
// the macro where the module is built (a named module cannot export a macro). The
// other macros are in <mwrap/libarchive/macros.hpp>. Written by tools/generate.py.
module;
#ifndef LIBARCHIVE_STATIC
#define LIBARCHIVE_STATIC
#endif
#include <archive.h>
#include <archive_entry.h>

// The values, taken under other names while the macros are defined.
namespace mwrap_libarchive_capture {
inline constexpr auto value_AE_IFBLK = (AE_IFBLK);
inline constexpr auto value_AE_IFCHR = (AE_IFCHR);
inline constexpr auto value_AE_IFDIR = (AE_IFDIR);
inline constexpr auto value_AE_IFIFO = (AE_IFIFO);
inline constexpr auto value_AE_IFLNK = (AE_IFLNK);
inline constexpr auto value_AE_IFMT = (AE_IFMT);
inline constexpr auto value_AE_IFREG = (AE_IFREG);
inline constexpr auto value_AE_IFSOCK = (AE_IFSOCK);
inline constexpr auto value_AE_SYMLINK_TYPE_DIRECTORY = (AE_SYMLINK_TYPE_DIRECTORY);
inline constexpr auto value_AE_SYMLINK_TYPE_FILE = (AE_SYMLINK_TYPE_FILE);
inline constexpr auto value_AE_SYMLINK_TYPE_UNDEFINED = (AE_SYMLINK_TYPE_UNDEFINED);
inline constexpr auto value_ARCHIVE_COMPRESSION_BZIP2 = (ARCHIVE_COMPRESSION_BZIP2);
inline constexpr auto value_ARCHIVE_COMPRESSION_COMPRESS = (ARCHIVE_COMPRESSION_COMPRESS);
inline constexpr auto value_ARCHIVE_COMPRESSION_GZIP = (ARCHIVE_COMPRESSION_GZIP);
inline constexpr auto value_ARCHIVE_COMPRESSION_LRZIP = (ARCHIVE_COMPRESSION_LRZIP);
inline constexpr auto value_ARCHIVE_COMPRESSION_LZIP = (ARCHIVE_COMPRESSION_LZIP);
inline constexpr auto value_ARCHIVE_COMPRESSION_LZMA = (ARCHIVE_COMPRESSION_LZMA);
inline constexpr auto value_ARCHIVE_COMPRESSION_NONE = (ARCHIVE_COMPRESSION_NONE);
inline constexpr auto value_ARCHIVE_COMPRESSION_PROGRAM = (ARCHIVE_COMPRESSION_PROGRAM);
inline constexpr auto value_ARCHIVE_COMPRESSION_RPM = (ARCHIVE_COMPRESSION_RPM);
inline constexpr auto value_ARCHIVE_COMPRESSION_UU = (ARCHIVE_COMPRESSION_UU);
inline constexpr auto value_ARCHIVE_COMPRESSION_XZ = (ARCHIVE_COMPRESSION_XZ);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ADD_FILE = (ARCHIVE_ENTRY_ACL_ADD_FILE);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ADD_SUBDIRECTORY = (ARCHIVE_ENTRY_ACL_ADD_SUBDIRECTORY);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_APPEND_DATA = (ARCHIVE_ENTRY_ACL_APPEND_DATA);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_DELETE = (ARCHIVE_ENTRY_ACL_DELETE);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_DELETE_CHILD = (ARCHIVE_ENTRY_ACL_DELETE_CHILD);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT = (ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_FAILED_ACCESS = (ARCHIVE_ENTRY_ACL_ENTRY_FAILED_ACCESS);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT = (ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_INHERITED = (ARCHIVE_ENTRY_ACL_ENTRY_INHERITED);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY = (ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT = (ARCHIVE_ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS = (ARCHIVE_ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_EVERYONE = (ARCHIVE_ENTRY_ACL_EVERYONE);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_EXECUTE = (ARCHIVE_ENTRY_ACL_EXECUTE);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_GROUP = (ARCHIVE_ENTRY_ACL_GROUP);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_GROUP_OBJ = (ARCHIVE_ENTRY_ACL_GROUP_OBJ);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_INHERITANCE_NFS4 = (ARCHIVE_ENTRY_ACL_INHERITANCE_NFS4);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_LIST_DIRECTORY = (ARCHIVE_ENTRY_ACL_LIST_DIRECTORY);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_MASK = (ARCHIVE_ENTRY_ACL_MASK);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_OTHER = (ARCHIVE_ENTRY_ACL_OTHER);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_PERMS_NFS4 = (ARCHIVE_ENTRY_ACL_PERMS_NFS4);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_PERMS_POSIX1E = (ARCHIVE_ENTRY_ACL_PERMS_POSIX1E);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_READ = (ARCHIVE_ENTRY_ACL_READ);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_READ_ACL = (ARCHIVE_ENTRY_ACL_READ_ACL);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES = (ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_READ_DATA = (ARCHIVE_ENTRY_ACL_READ_DATA);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS = (ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_STYLE_COMPACT = (ARCHIVE_ENTRY_ACL_STYLE_COMPACT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID = (ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT = (ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA = (ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_STYLE_SOLARIS = (ARCHIVE_ENTRY_ACL_STYLE_SOLARIS);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_SYNCHRONIZE = (ARCHIVE_ENTRY_ACL_SYNCHRONIZE);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_ACCESS = (ARCHIVE_ENTRY_ACL_TYPE_ACCESS);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_ALARM = (ARCHIVE_ENTRY_ACL_TYPE_ALARM);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_ALLOW = (ARCHIVE_ENTRY_ACL_TYPE_ALLOW);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_AUDIT = (ARCHIVE_ENTRY_ACL_TYPE_AUDIT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_DEFAULT = (ARCHIVE_ENTRY_ACL_TYPE_DEFAULT);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_DENY = (ARCHIVE_ENTRY_ACL_TYPE_DENY);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_NFS4 = (ARCHIVE_ENTRY_ACL_TYPE_NFS4);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_TYPE_POSIX1E = (ARCHIVE_ENTRY_ACL_TYPE_POSIX1E);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_USER = (ARCHIVE_ENTRY_ACL_USER);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_USER_OBJ = (ARCHIVE_ENTRY_ACL_USER_OBJ);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_WRITE = (ARCHIVE_ENTRY_ACL_WRITE);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_WRITE_ACL = (ARCHIVE_ENTRY_ACL_WRITE_ACL);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES = (ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_WRITE_DATA = (ARCHIVE_ENTRY_ACL_WRITE_DATA);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS = (ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS);
inline constexpr auto value_ARCHIVE_ENTRY_ACL_WRITE_OWNER = (ARCHIVE_ENTRY_ACL_WRITE_OWNER);
inline constexpr auto value_ARCHIVE_ENTRY_DIGEST_MD5 = (ARCHIVE_ENTRY_DIGEST_MD5);
inline constexpr auto value_ARCHIVE_ENTRY_DIGEST_RMD160 = (ARCHIVE_ENTRY_DIGEST_RMD160);
inline constexpr auto value_ARCHIVE_ENTRY_DIGEST_SHA1 = (ARCHIVE_ENTRY_DIGEST_SHA1);
inline constexpr auto value_ARCHIVE_ENTRY_DIGEST_SHA256 = (ARCHIVE_ENTRY_DIGEST_SHA256);
inline constexpr auto value_ARCHIVE_ENTRY_DIGEST_SHA384 = (ARCHIVE_ENTRY_DIGEST_SHA384);
inline constexpr auto value_ARCHIVE_ENTRY_DIGEST_SHA512 = (ARCHIVE_ENTRY_DIGEST_SHA512);
inline constexpr auto value_ARCHIVE_EOF = (ARCHIVE_EOF);
inline constexpr auto value_ARCHIVE_EXTRACT_ACL = (ARCHIVE_EXTRACT_ACL);
inline constexpr auto value_ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS = (ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS);
inline constexpr auto value_ARCHIVE_EXTRACT_FFLAGS = (ARCHIVE_EXTRACT_FFLAGS);
inline constexpr auto value_ARCHIVE_EXTRACT_HFS_COMPRESSION_FORCED = (ARCHIVE_EXTRACT_HFS_COMPRESSION_FORCED);
inline constexpr auto value_ARCHIVE_EXTRACT_MAC_METADATA = (ARCHIVE_EXTRACT_MAC_METADATA);
inline constexpr auto value_ARCHIVE_EXTRACT_NO_AUTODIR = (ARCHIVE_EXTRACT_NO_AUTODIR);
inline constexpr auto value_ARCHIVE_EXTRACT_NO_HFS_COMPRESSION = (ARCHIVE_EXTRACT_NO_HFS_COMPRESSION);
inline constexpr auto value_ARCHIVE_EXTRACT_NO_OVERWRITE = (ARCHIVE_EXTRACT_NO_OVERWRITE);
inline constexpr auto value_ARCHIVE_EXTRACT_NO_OVERWRITE_NEWER = (ARCHIVE_EXTRACT_NO_OVERWRITE_NEWER);
inline constexpr auto value_ARCHIVE_EXTRACT_OWNER = (ARCHIVE_EXTRACT_OWNER);
inline constexpr auto value_ARCHIVE_EXTRACT_PERM = (ARCHIVE_EXTRACT_PERM);
inline constexpr auto value_ARCHIVE_EXTRACT_SAFE_WRITES = (ARCHIVE_EXTRACT_SAFE_WRITES);
inline constexpr auto value_ARCHIVE_EXTRACT_SECURE_NOABSOLUTEPATHS = (ARCHIVE_EXTRACT_SECURE_NOABSOLUTEPATHS);
inline constexpr auto value_ARCHIVE_EXTRACT_SECURE_NODOTDOT = (ARCHIVE_EXTRACT_SECURE_NODOTDOT);
inline constexpr auto value_ARCHIVE_EXTRACT_SECURE_SYMLINKS = (ARCHIVE_EXTRACT_SECURE_SYMLINKS);
inline constexpr auto value_ARCHIVE_EXTRACT_SPARSE = (ARCHIVE_EXTRACT_SPARSE);
inline constexpr auto value_ARCHIVE_EXTRACT_TIME = (ARCHIVE_EXTRACT_TIME);
inline constexpr auto value_ARCHIVE_EXTRACT_UNLINK = (ARCHIVE_EXTRACT_UNLINK);
inline constexpr auto value_ARCHIVE_EXTRACT_XATTR = (ARCHIVE_EXTRACT_XATTR);
inline constexpr auto value_ARCHIVE_FAILED = (ARCHIVE_FAILED);
inline constexpr auto value_ARCHIVE_FATAL = (ARCHIVE_FATAL);
inline constexpr auto value_ARCHIVE_FILTER_BZIP2 = (ARCHIVE_FILTER_BZIP2);
inline constexpr auto value_ARCHIVE_FILTER_COMPRESS = (ARCHIVE_FILTER_COMPRESS);
inline constexpr auto value_ARCHIVE_FILTER_GRZIP = (ARCHIVE_FILTER_GRZIP);
inline constexpr auto value_ARCHIVE_FILTER_GZIP = (ARCHIVE_FILTER_GZIP);
inline constexpr auto value_ARCHIVE_FILTER_LRZIP = (ARCHIVE_FILTER_LRZIP);
inline constexpr auto value_ARCHIVE_FILTER_LZ4 = (ARCHIVE_FILTER_LZ4);
inline constexpr auto value_ARCHIVE_FILTER_LZIP = (ARCHIVE_FILTER_LZIP);
inline constexpr auto value_ARCHIVE_FILTER_LZMA = (ARCHIVE_FILTER_LZMA);
inline constexpr auto value_ARCHIVE_FILTER_LZOP = (ARCHIVE_FILTER_LZOP);
inline constexpr auto value_ARCHIVE_FILTER_NONE = (ARCHIVE_FILTER_NONE);
inline constexpr auto value_ARCHIVE_FILTER_PROGRAM = (ARCHIVE_FILTER_PROGRAM);
inline constexpr auto value_ARCHIVE_FILTER_RPM = (ARCHIVE_FILTER_RPM);
inline constexpr auto value_ARCHIVE_FILTER_UU = (ARCHIVE_FILTER_UU);
inline constexpr auto value_ARCHIVE_FILTER_XZ = (ARCHIVE_FILTER_XZ);
inline constexpr auto value_ARCHIVE_FILTER_ZSTD = (ARCHIVE_FILTER_ZSTD);
inline constexpr auto value_ARCHIVE_FORMAT_7ZIP = (ARCHIVE_FORMAT_7ZIP);
inline constexpr auto value_ARCHIVE_FORMAT_AR = (ARCHIVE_FORMAT_AR);
inline constexpr auto value_ARCHIVE_FORMAT_AR_BSD = (ARCHIVE_FORMAT_AR_BSD);
inline constexpr auto value_ARCHIVE_FORMAT_AR_GNU = (ARCHIVE_FORMAT_AR_GNU);
inline constexpr auto value_ARCHIVE_FORMAT_BASE_MASK = (ARCHIVE_FORMAT_BASE_MASK);
inline constexpr auto value_ARCHIVE_FORMAT_CAB = (ARCHIVE_FORMAT_CAB);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO = (ARCHIVE_FORMAT_CPIO);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_AFIO_LARGE = (ARCHIVE_FORMAT_CPIO_AFIO_LARGE);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_BIN_BE = (ARCHIVE_FORMAT_CPIO_BIN_BE);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_BIN_LE = (ARCHIVE_FORMAT_CPIO_BIN_LE);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_POSIX = (ARCHIVE_FORMAT_CPIO_POSIX);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_PWB = (ARCHIVE_FORMAT_CPIO_PWB);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_SVR4_CRC = (ARCHIVE_FORMAT_CPIO_SVR4_CRC);
inline constexpr auto value_ARCHIVE_FORMAT_CPIO_SVR4_NOCRC = (ARCHIVE_FORMAT_CPIO_SVR4_NOCRC);
inline constexpr auto value_ARCHIVE_FORMAT_EMPTY = (ARCHIVE_FORMAT_EMPTY);
inline constexpr auto value_ARCHIVE_FORMAT_ISO9660 = (ARCHIVE_FORMAT_ISO9660);
inline constexpr auto value_ARCHIVE_FORMAT_ISO9660_ROCKRIDGE = (ARCHIVE_FORMAT_ISO9660_ROCKRIDGE);
inline constexpr auto value_ARCHIVE_FORMAT_LHA = (ARCHIVE_FORMAT_LHA);
inline constexpr auto value_ARCHIVE_FORMAT_MTREE = (ARCHIVE_FORMAT_MTREE);
inline constexpr auto value_ARCHIVE_FORMAT_RAR = (ARCHIVE_FORMAT_RAR);
inline constexpr auto value_ARCHIVE_FORMAT_RAR_V5 = (ARCHIVE_FORMAT_RAR_V5);
inline constexpr auto value_ARCHIVE_FORMAT_RAW = (ARCHIVE_FORMAT_RAW);
inline constexpr auto value_ARCHIVE_FORMAT_SHAR = (ARCHIVE_FORMAT_SHAR);
inline constexpr auto value_ARCHIVE_FORMAT_SHAR_BASE = (ARCHIVE_FORMAT_SHAR_BASE);
inline constexpr auto value_ARCHIVE_FORMAT_SHAR_DUMP = (ARCHIVE_FORMAT_SHAR_DUMP);
inline constexpr auto value_ARCHIVE_FORMAT_TAR = (ARCHIVE_FORMAT_TAR);
inline constexpr auto value_ARCHIVE_FORMAT_TAR_GNUTAR = (ARCHIVE_FORMAT_TAR_GNUTAR);
inline constexpr auto value_ARCHIVE_FORMAT_TAR_PAX_INTERCHANGE = (ARCHIVE_FORMAT_TAR_PAX_INTERCHANGE);
inline constexpr auto value_ARCHIVE_FORMAT_TAR_PAX_RESTRICTED = (ARCHIVE_FORMAT_TAR_PAX_RESTRICTED);
inline constexpr auto value_ARCHIVE_FORMAT_TAR_USTAR = (ARCHIVE_FORMAT_TAR_USTAR);
inline constexpr auto value_ARCHIVE_FORMAT_WARC = (ARCHIVE_FORMAT_WARC);
inline constexpr auto value_ARCHIVE_FORMAT_XAR = (ARCHIVE_FORMAT_XAR);
inline constexpr auto value_ARCHIVE_FORMAT_ZIP = (ARCHIVE_FORMAT_ZIP);
inline constexpr auto value_ARCHIVE_MATCH_CTIME = (ARCHIVE_MATCH_CTIME);
inline constexpr auto value_ARCHIVE_MATCH_EQUAL = (ARCHIVE_MATCH_EQUAL);
inline constexpr auto value_ARCHIVE_MATCH_MTIME = (ARCHIVE_MATCH_MTIME);
inline constexpr auto value_ARCHIVE_MATCH_NEWER = (ARCHIVE_MATCH_NEWER);
inline constexpr auto value_ARCHIVE_MATCH_OLDER = (ARCHIVE_MATCH_OLDER);
inline constexpr auto value_ARCHIVE_OK = (ARCHIVE_OK);
inline constexpr auto value_ARCHIVE_READDISK_HONOR_NODUMP = (ARCHIVE_READDISK_HONOR_NODUMP);
inline constexpr auto value_ARCHIVE_READDISK_MAC_COPYFILE = (ARCHIVE_READDISK_MAC_COPYFILE);
inline constexpr auto value_ARCHIVE_READDISK_NO_ACL = (ARCHIVE_READDISK_NO_ACL);
inline constexpr auto value_ARCHIVE_READDISK_NO_FFLAGS = (ARCHIVE_READDISK_NO_FFLAGS);
inline constexpr auto value_ARCHIVE_READDISK_NO_SPARSE = (ARCHIVE_READDISK_NO_SPARSE);
inline constexpr auto value_ARCHIVE_READDISK_NO_TRAVERSE_MOUNTS = (ARCHIVE_READDISK_NO_TRAVERSE_MOUNTS);
inline constexpr auto value_ARCHIVE_READDISK_NO_XATTR = (ARCHIVE_READDISK_NO_XATTR);
inline constexpr auto value_ARCHIVE_READDISK_RESTORE_ATIME = (ARCHIVE_READDISK_RESTORE_ATIME);
inline constexpr auto value_ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA = (ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA);
inline constexpr auto value_ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA = (ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA);
inline constexpr auto value_ARCHIVE_READ_FORMAT_CAPS_NONE = (ARCHIVE_READ_FORMAT_CAPS_NONE);
inline constexpr auto value_ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW = (ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW);
inline constexpr auto value_ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED = (ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED);
inline constexpr auto value_ARCHIVE_RETRY = (ARCHIVE_RETRY);
inline constexpr auto value_ARCHIVE_VERSION_NUMBER = (ARCHIVE_VERSION_NUMBER);
inline constexpr auto value_ARCHIVE_VERSION_ONLY_STRING = (ARCHIVE_VERSION_ONLY_STRING);
inline constexpr auto value_ARCHIVE_VERSION_STRING = (ARCHIVE_VERSION_STRING);
inline constexpr auto value_ARCHIVE_WARN = (ARCHIVE_WARN);
inline constexpr auto value_OLD_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID = (OLD_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID);
inline constexpr auto value_OLD_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT = (OLD_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT);
}
#undef AE_IFBLK
#undef AE_IFCHR
#undef AE_IFDIR
#undef AE_IFIFO
#undef AE_IFLNK
#undef AE_IFMT
#undef AE_IFREG
#undef AE_IFSOCK
#undef AE_SYMLINK_TYPE_DIRECTORY
#undef AE_SYMLINK_TYPE_FILE
#undef AE_SYMLINK_TYPE_UNDEFINED
#undef ARCHIVE_COMPRESSION_BZIP2
#undef ARCHIVE_COMPRESSION_COMPRESS
#undef ARCHIVE_COMPRESSION_GZIP
#undef ARCHIVE_COMPRESSION_LRZIP
#undef ARCHIVE_COMPRESSION_LZIP
#undef ARCHIVE_COMPRESSION_LZMA
#undef ARCHIVE_COMPRESSION_NONE
#undef ARCHIVE_COMPRESSION_PROGRAM
#undef ARCHIVE_COMPRESSION_RPM
#undef ARCHIVE_COMPRESSION_UU
#undef ARCHIVE_COMPRESSION_XZ
#undef ARCHIVE_ENTRY_ACL_ADD_FILE
#undef ARCHIVE_ENTRY_ACL_ADD_SUBDIRECTORY
#undef ARCHIVE_ENTRY_ACL_APPEND_DATA
#undef ARCHIVE_ENTRY_ACL_DELETE
#undef ARCHIVE_ENTRY_ACL_DELETE_CHILD
#undef ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT
#undef ARCHIVE_ENTRY_ACL_ENTRY_FAILED_ACCESS
#undef ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT
#undef ARCHIVE_ENTRY_ACL_ENTRY_INHERITED
#undef ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY
#undef ARCHIVE_ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT
#undef ARCHIVE_ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS
#undef ARCHIVE_ENTRY_ACL_EVERYONE
#undef ARCHIVE_ENTRY_ACL_EXECUTE
#undef ARCHIVE_ENTRY_ACL_GROUP
#undef ARCHIVE_ENTRY_ACL_GROUP_OBJ
#undef ARCHIVE_ENTRY_ACL_INHERITANCE_NFS4
#undef ARCHIVE_ENTRY_ACL_LIST_DIRECTORY
#undef ARCHIVE_ENTRY_ACL_MASK
#undef ARCHIVE_ENTRY_ACL_OTHER
#undef ARCHIVE_ENTRY_ACL_PERMS_NFS4
#undef ARCHIVE_ENTRY_ACL_PERMS_POSIX1E
#undef ARCHIVE_ENTRY_ACL_READ
#undef ARCHIVE_ENTRY_ACL_READ_ACL
#undef ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES
#undef ARCHIVE_ENTRY_ACL_READ_DATA
#undef ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS
#undef ARCHIVE_ENTRY_ACL_STYLE_COMPACT
#undef ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID
#undef ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT
#undef ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA
#undef ARCHIVE_ENTRY_ACL_STYLE_SOLARIS
#undef ARCHIVE_ENTRY_ACL_SYNCHRONIZE
#undef ARCHIVE_ENTRY_ACL_TYPE_ACCESS
#undef ARCHIVE_ENTRY_ACL_TYPE_ALARM
#undef ARCHIVE_ENTRY_ACL_TYPE_ALLOW
#undef ARCHIVE_ENTRY_ACL_TYPE_AUDIT
#undef ARCHIVE_ENTRY_ACL_TYPE_DEFAULT
#undef ARCHIVE_ENTRY_ACL_TYPE_DENY
#undef ARCHIVE_ENTRY_ACL_TYPE_NFS4
#undef ARCHIVE_ENTRY_ACL_TYPE_POSIX1E
#undef ARCHIVE_ENTRY_ACL_USER
#undef ARCHIVE_ENTRY_ACL_USER_OBJ
#undef ARCHIVE_ENTRY_ACL_WRITE
#undef ARCHIVE_ENTRY_ACL_WRITE_ACL
#undef ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES
#undef ARCHIVE_ENTRY_ACL_WRITE_DATA
#undef ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS
#undef ARCHIVE_ENTRY_ACL_WRITE_OWNER
#undef ARCHIVE_ENTRY_DIGEST_MD5
#undef ARCHIVE_ENTRY_DIGEST_RMD160
#undef ARCHIVE_ENTRY_DIGEST_SHA1
#undef ARCHIVE_ENTRY_DIGEST_SHA256
#undef ARCHIVE_ENTRY_DIGEST_SHA384
#undef ARCHIVE_ENTRY_DIGEST_SHA512
#undef ARCHIVE_EOF
#undef ARCHIVE_EXTRACT_ACL
#undef ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS
#undef ARCHIVE_EXTRACT_FFLAGS
#undef ARCHIVE_EXTRACT_HFS_COMPRESSION_FORCED
#undef ARCHIVE_EXTRACT_MAC_METADATA
#undef ARCHIVE_EXTRACT_NO_AUTODIR
#undef ARCHIVE_EXTRACT_NO_HFS_COMPRESSION
#undef ARCHIVE_EXTRACT_NO_OVERWRITE
#undef ARCHIVE_EXTRACT_NO_OVERWRITE_NEWER
#undef ARCHIVE_EXTRACT_OWNER
#undef ARCHIVE_EXTRACT_PERM
#undef ARCHIVE_EXTRACT_SAFE_WRITES
#undef ARCHIVE_EXTRACT_SECURE_NOABSOLUTEPATHS
#undef ARCHIVE_EXTRACT_SECURE_NODOTDOT
#undef ARCHIVE_EXTRACT_SECURE_SYMLINKS
#undef ARCHIVE_EXTRACT_SPARSE
#undef ARCHIVE_EXTRACT_TIME
#undef ARCHIVE_EXTRACT_UNLINK
#undef ARCHIVE_EXTRACT_XATTR
#undef ARCHIVE_FAILED
#undef ARCHIVE_FATAL
#undef ARCHIVE_FILTER_BZIP2
#undef ARCHIVE_FILTER_COMPRESS
#undef ARCHIVE_FILTER_GRZIP
#undef ARCHIVE_FILTER_GZIP
#undef ARCHIVE_FILTER_LRZIP
#undef ARCHIVE_FILTER_LZ4
#undef ARCHIVE_FILTER_LZIP
#undef ARCHIVE_FILTER_LZMA
#undef ARCHIVE_FILTER_LZOP
#undef ARCHIVE_FILTER_NONE
#undef ARCHIVE_FILTER_PROGRAM
#undef ARCHIVE_FILTER_RPM
#undef ARCHIVE_FILTER_UU
#undef ARCHIVE_FILTER_XZ
#undef ARCHIVE_FILTER_ZSTD
#undef ARCHIVE_FORMAT_7ZIP
#undef ARCHIVE_FORMAT_AR
#undef ARCHIVE_FORMAT_AR_BSD
#undef ARCHIVE_FORMAT_AR_GNU
#undef ARCHIVE_FORMAT_BASE_MASK
#undef ARCHIVE_FORMAT_CAB
#undef ARCHIVE_FORMAT_CPIO
#undef ARCHIVE_FORMAT_CPIO_AFIO_LARGE
#undef ARCHIVE_FORMAT_CPIO_BIN_BE
#undef ARCHIVE_FORMAT_CPIO_BIN_LE
#undef ARCHIVE_FORMAT_CPIO_POSIX
#undef ARCHIVE_FORMAT_CPIO_PWB
#undef ARCHIVE_FORMAT_CPIO_SVR4_CRC
#undef ARCHIVE_FORMAT_CPIO_SVR4_NOCRC
#undef ARCHIVE_FORMAT_EMPTY
#undef ARCHIVE_FORMAT_ISO9660
#undef ARCHIVE_FORMAT_ISO9660_ROCKRIDGE
#undef ARCHIVE_FORMAT_LHA
#undef ARCHIVE_FORMAT_MTREE
#undef ARCHIVE_FORMAT_RAR
#undef ARCHIVE_FORMAT_RAR_V5
#undef ARCHIVE_FORMAT_RAW
#undef ARCHIVE_FORMAT_SHAR
#undef ARCHIVE_FORMAT_SHAR_BASE
#undef ARCHIVE_FORMAT_SHAR_DUMP
#undef ARCHIVE_FORMAT_TAR
#undef ARCHIVE_FORMAT_TAR_GNUTAR
#undef ARCHIVE_FORMAT_TAR_PAX_INTERCHANGE
#undef ARCHIVE_FORMAT_TAR_PAX_RESTRICTED
#undef ARCHIVE_FORMAT_TAR_USTAR
#undef ARCHIVE_FORMAT_WARC
#undef ARCHIVE_FORMAT_XAR
#undef ARCHIVE_FORMAT_ZIP
#undef ARCHIVE_MATCH_CTIME
#undef ARCHIVE_MATCH_EQUAL
#undef ARCHIVE_MATCH_MTIME
#undef ARCHIVE_MATCH_NEWER
#undef ARCHIVE_MATCH_OLDER
#undef ARCHIVE_OK
#undef ARCHIVE_READDISK_HONOR_NODUMP
#undef ARCHIVE_READDISK_MAC_COPYFILE
#undef ARCHIVE_READDISK_NO_ACL
#undef ARCHIVE_READDISK_NO_FFLAGS
#undef ARCHIVE_READDISK_NO_SPARSE
#undef ARCHIVE_READDISK_NO_TRAVERSE_MOUNTS
#undef ARCHIVE_READDISK_NO_XATTR
#undef ARCHIVE_READDISK_RESTORE_ATIME
#undef ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA
#undef ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA
#undef ARCHIVE_READ_FORMAT_CAPS_NONE
#undef ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW
#undef ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED
#undef ARCHIVE_RETRY
#undef ARCHIVE_VERSION_NUMBER
#undef ARCHIVE_VERSION_ONLY_STRING
#undef ARCHIVE_VERSION_STRING
#undef ARCHIVE_WARN
#undef OLD_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID
#undef OLD_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT

export module mcpplibs.mwrap.libarchive.macros;

export namespace mcpplibs::mwrap::libarchive::macros {
inline constexpr auto AE_IFBLK = mwrap_libarchive_capture::value_AE_IFBLK;
inline constexpr auto AE_IFCHR = mwrap_libarchive_capture::value_AE_IFCHR;
inline constexpr auto AE_IFDIR = mwrap_libarchive_capture::value_AE_IFDIR;
inline constexpr auto AE_IFIFO = mwrap_libarchive_capture::value_AE_IFIFO;
inline constexpr auto AE_IFLNK = mwrap_libarchive_capture::value_AE_IFLNK;
inline constexpr auto AE_IFMT = mwrap_libarchive_capture::value_AE_IFMT;
inline constexpr auto AE_IFREG = mwrap_libarchive_capture::value_AE_IFREG;
inline constexpr auto AE_IFSOCK = mwrap_libarchive_capture::value_AE_IFSOCK;
inline constexpr auto AE_SYMLINK_TYPE_DIRECTORY = mwrap_libarchive_capture::value_AE_SYMLINK_TYPE_DIRECTORY;
inline constexpr auto AE_SYMLINK_TYPE_FILE = mwrap_libarchive_capture::value_AE_SYMLINK_TYPE_FILE;
inline constexpr auto AE_SYMLINK_TYPE_UNDEFINED = mwrap_libarchive_capture::value_AE_SYMLINK_TYPE_UNDEFINED;
inline constexpr auto ARCHIVE_COMPRESSION_BZIP2 = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_BZIP2;
inline constexpr auto ARCHIVE_COMPRESSION_COMPRESS = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_COMPRESS;
inline constexpr auto ARCHIVE_COMPRESSION_GZIP = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_GZIP;
inline constexpr auto ARCHIVE_COMPRESSION_LRZIP = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_LRZIP;
inline constexpr auto ARCHIVE_COMPRESSION_LZIP = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_LZIP;
inline constexpr auto ARCHIVE_COMPRESSION_LZMA = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_LZMA;
inline constexpr auto ARCHIVE_COMPRESSION_NONE = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_NONE;
inline constexpr auto ARCHIVE_COMPRESSION_PROGRAM = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_PROGRAM;
inline constexpr auto ARCHIVE_COMPRESSION_RPM = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_RPM;
inline constexpr auto ARCHIVE_COMPRESSION_UU = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_UU;
inline constexpr auto ARCHIVE_COMPRESSION_XZ = mwrap_libarchive_capture::value_ARCHIVE_COMPRESSION_XZ;
inline constexpr auto ARCHIVE_ENTRY_ACL_ADD_FILE = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ADD_FILE;
inline constexpr auto ARCHIVE_ENTRY_ACL_ADD_SUBDIRECTORY = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ADD_SUBDIRECTORY;
inline constexpr auto ARCHIVE_ENTRY_ACL_APPEND_DATA = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_APPEND_DATA;
inline constexpr auto ARCHIVE_ENTRY_ACL_DELETE = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_DELETE;
inline constexpr auto ARCHIVE_ENTRY_ACL_DELETE_CHILD = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_DELETE_CHILD;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_FAILED_ACCESS = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_FAILED_ACCESS;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_INHERITED = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_INHERITED;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_NO_PROPAGATE_INHERIT;
inline constexpr auto ARCHIVE_ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_ENTRY_SUCCESSFUL_ACCESS;
inline constexpr auto ARCHIVE_ENTRY_ACL_EVERYONE = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_EVERYONE;
inline constexpr auto ARCHIVE_ENTRY_ACL_EXECUTE = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_EXECUTE;
inline constexpr auto ARCHIVE_ENTRY_ACL_GROUP = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_GROUP;
inline constexpr auto ARCHIVE_ENTRY_ACL_GROUP_OBJ = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_GROUP_OBJ;
inline constexpr auto ARCHIVE_ENTRY_ACL_INHERITANCE_NFS4 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_INHERITANCE_NFS4;
inline constexpr auto ARCHIVE_ENTRY_ACL_LIST_DIRECTORY = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_LIST_DIRECTORY;
inline constexpr auto ARCHIVE_ENTRY_ACL_MASK = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_MASK;
inline constexpr auto ARCHIVE_ENTRY_ACL_OTHER = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_OTHER;
inline constexpr auto ARCHIVE_ENTRY_ACL_PERMS_NFS4 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_PERMS_NFS4;
inline constexpr auto ARCHIVE_ENTRY_ACL_PERMS_POSIX1E = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_PERMS_POSIX1E;
inline constexpr auto ARCHIVE_ENTRY_ACL_READ = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_READ;
inline constexpr auto ARCHIVE_ENTRY_ACL_READ_ACL = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_READ_ACL;
inline constexpr auto ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES;
inline constexpr auto ARCHIVE_ENTRY_ACL_READ_DATA = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_READ_DATA;
inline constexpr auto ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS;
inline constexpr auto ARCHIVE_ENTRY_ACL_STYLE_COMPACT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_STYLE_COMPACT;
inline constexpr auto ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID;
inline constexpr auto ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT;
inline constexpr auto ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_STYLE_SEPARATOR_COMMA;
inline constexpr auto ARCHIVE_ENTRY_ACL_STYLE_SOLARIS = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_STYLE_SOLARIS;
inline constexpr auto ARCHIVE_ENTRY_ACL_SYNCHRONIZE = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_SYNCHRONIZE;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_ACCESS = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_ACCESS;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_ALARM = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_ALARM;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_ALLOW = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_ALLOW;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_AUDIT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_AUDIT;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_DEFAULT = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_DEFAULT;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_DENY = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_DENY;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_NFS4 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_NFS4;
inline constexpr auto ARCHIVE_ENTRY_ACL_TYPE_POSIX1E = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_TYPE_POSIX1E;
inline constexpr auto ARCHIVE_ENTRY_ACL_USER = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_USER;
inline constexpr auto ARCHIVE_ENTRY_ACL_USER_OBJ = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_USER_OBJ;
inline constexpr auto ARCHIVE_ENTRY_ACL_WRITE = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_WRITE;
inline constexpr auto ARCHIVE_ENTRY_ACL_WRITE_ACL = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_WRITE_ACL;
inline constexpr auto ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES;
inline constexpr auto ARCHIVE_ENTRY_ACL_WRITE_DATA = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_WRITE_DATA;
inline constexpr auto ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS;
inline constexpr auto ARCHIVE_ENTRY_ACL_WRITE_OWNER = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_ACL_WRITE_OWNER;
inline constexpr auto ARCHIVE_ENTRY_DIGEST_MD5 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_DIGEST_MD5;
inline constexpr auto ARCHIVE_ENTRY_DIGEST_RMD160 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_DIGEST_RMD160;
inline constexpr auto ARCHIVE_ENTRY_DIGEST_SHA1 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_DIGEST_SHA1;
inline constexpr auto ARCHIVE_ENTRY_DIGEST_SHA256 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_DIGEST_SHA256;
inline constexpr auto ARCHIVE_ENTRY_DIGEST_SHA384 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_DIGEST_SHA384;
inline constexpr auto ARCHIVE_ENTRY_DIGEST_SHA512 = mwrap_libarchive_capture::value_ARCHIVE_ENTRY_DIGEST_SHA512;
inline constexpr auto ARCHIVE_EOF = mwrap_libarchive_capture::value_ARCHIVE_EOF;
inline constexpr auto ARCHIVE_EXTRACT_ACL = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_ACL;
inline constexpr auto ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_CLEAR_NOCHANGE_FFLAGS;
inline constexpr auto ARCHIVE_EXTRACT_FFLAGS = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_FFLAGS;
inline constexpr auto ARCHIVE_EXTRACT_HFS_COMPRESSION_FORCED = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_HFS_COMPRESSION_FORCED;
inline constexpr auto ARCHIVE_EXTRACT_MAC_METADATA = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_MAC_METADATA;
inline constexpr auto ARCHIVE_EXTRACT_NO_AUTODIR = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_NO_AUTODIR;
inline constexpr auto ARCHIVE_EXTRACT_NO_HFS_COMPRESSION = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_NO_HFS_COMPRESSION;
inline constexpr auto ARCHIVE_EXTRACT_NO_OVERWRITE = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_NO_OVERWRITE;
inline constexpr auto ARCHIVE_EXTRACT_NO_OVERWRITE_NEWER = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_NO_OVERWRITE_NEWER;
inline constexpr auto ARCHIVE_EXTRACT_OWNER = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_OWNER;
inline constexpr auto ARCHIVE_EXTRACT_PERM = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_PERM;
inline constexpr auto ARCHIVE_EXTRACT_SAFE_WRITES = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_SAFE_WRITES;
inline constexpr auto ARCHIVE_EXTRACT_SECURE_NOABSOLUTEPATHS = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_SECURE_NOABSOLUTEPATHS;
inline constexpr auto ARCHIVE_EXTRACT_SECURE_NODOTDOT = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_SECURE_NODOTDOT;
inline constexpr auto ARCHIVE_EXTRACT_SECURE_SYMLINKS = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_SECURE_SYMLINKS;
inline constexpr auto ARCHIVE_EXTRACT_SPARSE = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_SPARSE;
inline constexpr auto ARCHIVE_EXTRACT_TIME = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_TIME;
inline constexpr auto ARCHIVE_EXTRACT_UNLINK = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_UNLINK;
inline constexpr auto ARCHIVE_EXTRACT_XATTR = mwrap_libarchive_capture::value_ARCHIVE_EXTRACT_XATTR;
inline constexpr auto ARCHIVE_FAILED = mwrap_libarchive_capture::value_ARCHIVE_FAILED;
inline constexpr auto ARCHIVE_FATAL = mwrap_libarchive_capture::value_ARCHIVE_FATAL;
inline constexpr auto ARCHIVE_FILTER_BZIP2 = mwrap_libarchive_capture::value_ARCHIVE_FILTER_BZIP2;
inline constexpr auto ARCHIVE_FILTER_COMPRESS = mwrap_libarchive_capture::value_ARCHIVE_FILTER_COMPRESS;
inline constexpr auto ARCHIVE_FILTER_GRZIP = mwrap_libarchive_capture::value_ARCHIVE_FILTER_GRZIP;
inline constexpr auto ARCHIVE_FILTER_GZIP = mwrap_libarchive_capture::value_ARCHIVE_FILTER_GZIP;
inline constexpr auto ARCHIVE_FILTER_LRZIP = mwrap_libarchive_capture::value_ARCHIVE_FILTER_LRZIP;
inline constexpr auto ARCHIVE_FILTER_LZ4 = mwrap_libarchive_capture::value_ARCHIVE_FILTER_LZ4;
inline constexpr auto ARCHIVE_FILTER_LZIP = mwrap_libarchive_capture::value_ARCHIVE_FILTER_LZIP;
inline constexpr auto ARCHIVE_FILTER_LZMA = mwrap_libarchive_capture::value_ARCHIVE_FILTER_LZMA;
inline constexpr auto ARCHIVE_FILTER_LZOP = mwrap_libarchive_capture::value_ARCHIVE_FILTER_LZOP;
inline constexpr auto ARCHIVE_FILTER_NONE = mwrap_libarchive_capture::value_ARCHIVE_FILTER_NONE;
inline constexpr auto ARCHIVE_FILTER_PROGRAM = mwrap_libarchive_capture::value_ARCHIVE_FILTER_PROGRAM;
inline constexpr auto ARCHIVE_FILTER_RPM = mwrap_libarchive_capture::value_ARCHIVE_FILTER_RPM;
inline constexpr auto ARCHIVE_FILTER_UU = mwrap_libarchive_capture::value_ARCHIVE_FILTER_UU;
inline constexpr auto ARCHIVE_FILTER_XZ = mwrap_libarchive_capture::value_ARCHIVE_FILTER_XZ;
inline constexpr auto ARCHIVE_FILTER_ZSTD = mwrap_libarchive_capture::value_ARCHIVE_FILTER_ZSTD;
inline constexpr auto ARCHIVE_FORMAT_7ZIP = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_7ZIP;
inline constexpr auto ARCHIVE_FORMAT_AR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_AR;
inline constexpr auto ARCHIVE_FORMAT_AR_BSD = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_AR_BSD;
inline constexpr auto ARCHIVE_FORMAT_AR_GNU = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_AR_GNU;
inline constexpr auto ARCHIVE_FORMAT_BASE_MASK = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_BASE_MASK;
inline constexpr auto ARCHIVE_FORMAT_CAB = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CAB;
inline constexpr auto ARCHIVE_FORMAT_CPIO = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO;
inline constexpr auto ARCHIVE_FORMAT_CPIO_AFIO_LARGE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_AFIO_LARGE;
inline constexpr auto ARCHIVE_FORMAT_CPIO_BIN_BE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_BIN_BE;
inline constexpr auto ARCHIVE_FORMAT_CPIO_BIN_LE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_BIN_LE;
inline constexpr auto ARCHIVE_FORMAT_CPIO_POSIX = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_POSIX;
inline constexpr auto ARCHIVE_FORMAT_CPIO_PWB = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_PWB;
inline constexpr auto ARCHIVE_FORMAT_CPIO_SVR4_CRC = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_SVR4_CRC;
inline constexpr auto ARCHIVE_FORMAT_CPIO_SVR4_NOCRC = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_CPIO_SVR4_NOCRC;
inline constexpr auto ARCHIVE_FORMAT_EMPTY = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_EMPTY;
inline constexpr auto ARCHIVE_FORMAT_ISO9660 = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_ISO9660;
inline constexpr auto ARCHIVE_FORMAT_ISO9660_ROCKRIDGE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_ISO9660_ROCKRIDGE;
inline constexpr auto ARCHIVE_FORMAT_LHA = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_LHA;
inline constexpr auto ARCHIVE_FORMAT_MTREE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_MTREE;
inline constexpr auto ARCHIVE_FORMAT_RAR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_RAR;
inline constexpr auto ARCHIVE_FORMAT_RAR_V5 = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_RAR_V5;
inline constexpr auto ARCHIVE_FORMAT_RAW = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_RAW;
inline constexpr auto ARCHIVE_FORMAT_SHAR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_SHAR;
inline constexpr auto ARCHIVE_FORMAT_SHAR_BASE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_SHAR_BASE;
inline constexpr auto ARCHIVE_FORMAT_SHAR_DUMP = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_SHAR_DUMP;
inline constexpr auto ARCHIVE_FORMAT_TAR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_TAR;
inline constexpr auto ARCHIVE_FORMAT_TAR_GNUTAR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_TAR_GNUTAR;
inline constexpr auto ARCHIVE_FORMAT_TAR_PAX_INTERCHANGE = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_TAR_PAX_INTERCHANGE;
inline constexpr auto ARCHIVE_FORMAT_TAR_PAX_RESTRICTED = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_TAR_PAX_RESTRICTED;
inline constexpr auto ARCHIVE_FORMAT_TAR_USTAR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_TAR_USTAR;
inline constexpr auto ARCHIVE_FORMAT_WARC = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_WARC;
inline constexpr auto ARCHIVE_FORMAT_XAR = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_XAR;
inline constexpr auto ARCHIVE_FORMAT_ZIP = mwrap_libarchive_capture::value_ARCHIVE_FORMAT_ZIP;
inline constexpr auto ARCHIVE_MATCH_CTIME = mwrap_libarchive_capture::value_ARCHIVE_MATCH_CTIME;
inline constexpr auto ARCHIVE_MATCH_EQUAL = mwrap_libarchive_capture::value_ARCHIVE_MATCH_EQUAL;
inline constexpr auto ARCHIVE_MATCH_MTIME = mwrap_libarchive_capture::value_ARCHIVE_MATCH_MTIME;
inline constexpr auto ARCHIVE_MATCH_NEWER = mwrap_libarchive_capture::value_ARCHIVE_MATCH_NEWER;
inline constexpr auto ARCHIVE_MATCH_OLDER = mwrap_libarchive_capture::value_ARCHIVE_MATCH_OLDER;
inline constexpr auto ARCHIVE_OK = mwrap_libarchive_capture::value_ARCHIVE_OK;
inline constexpr auto ARCHIVE_READDISK_HONOR_NODUMP = mwrap_libarchive_capture::value_ARCHIVE_READDISK_HONOR_NODUMP;
inline constexpr auto ARCHIVE_READDISK_MAC_COPYFILE = mwrap_libarchive_capture::value_ARCHIVE_READDISK_MAC_COPYFILE;
inline constexpr auto ARCHIVE_READDISK_NO_ACL = mwrap_libarchive_capture::value_ARCHIVE_READDISK_NO_ACL;
inline constexpr auto ARCHIVE_READDISK_NO_FFLAGS = mwrap_libarchive_capture::value_ARCHIVE_READDISK_NO_FFLAGS;
inline constexpr auto ARCHIVE_READDISK_NO_SPARSE = mwrap_libarchive_capture::value_ARCHIVE_READDISK_NO_SPARSE;
inline constexpr auto ARCHIVE_READDISK_NO_TRAVERSE_MOUNTS = mwrap_libarchive_capture::value_ARCHIVE_READDISK_NO_TRAVERSE_MOUNTS;
inline constexpr auto ARCHIVE_READDISK_NO_XATTR = mwrap_libarchive_capture::value_ARCHIVE_READDISK_NO_XATTR;
inline constexpr auto ARCHIVE_READDISK_RESTORE_ATIME = mwrap_libarchive_capture::value_ARCHIVE_READDISK_RESTORE_ATIME;
inline constexpr auto ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA = mwrap_libarchive_capture::value_ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_DATA;
inline constexpr auto ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA = mwrap_libarchive_capture::value_ARCHIVE_READ_FORMAT_CAPS_ENCRYPT_METADATA;
inline constexpr auto ARCHIVE_READ_FORMAT_CAPS_NONE = mwrap_libarchive_capture::value_ARCHIVE_READ_FORMAT_CAPS_NONE;
inline constexpr auto ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW = mwrap_libarchive_capture::value_ARCHIVE_READ_FORMAT_ENCRYPTION_DONT_KNOW;
inline constexpr auto ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED = mwrap_libarchive_capture::value_ARCHIVE_READ_FORMAT_ENCRYPTION_UNSUPPORTED;
inline constexpr auto ARCHIVE_RETRY = mwrap_libarchive_capture::value_ARCHIVE_RETRY;
inline constexpr auto ARCHIVE_VERSION_NUMBER = mwrap_libarchive_capture::value_ARCHIVE_VERSION_NUMBER;
inline constexpr auto ARCHIVE_VERSION_ONLY_STRING = mwrap_libarchive_capture::value_ARCHIVE_VERSION_ONLY_STRING;
inline constexpr auto ARCHIVE_VERSION_STRING = mwrap_libarchive_capture::value_ARCHIVE_VERSION_STRING;
inline constexpr auto ARCHIVE_WARN = mwrap_libarchive_capture::value_ARCHIVE_WARN;
inline constexpr auto OLD_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID = mwrap_libarchive_capture::value_OLD_ARCHIVE_ENTRY_ACL_STYLE_EXTRA_ID;
inline constexpr auto OLD_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT = mwrap_libarchive_capture::value_OLD_ARCHIVE_ENTRY_ACL_STYLE_MARK_DEFAULT;
}
