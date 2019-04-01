#ifndef _SYSTEM_IO_PATH_H_
#define _SYSTEM_IO_PATH_H_

#include <string>
#include <vector>

namespace System {
namespace IO {

class Path
{
public:
    static char DirectorySeparatorChar;
    static char AltDirectorySeparatorChar;
    static char InvalidPathChars[];
    static char VolumeSeparatorChar;

    static std::string Combine(std::string const &path1, std::string const &path2);
    static std::string GetDirectoryName(std::string const &path);
    static std::string GetExtension(std::string const &path);
    static std::string GetFileName(std::string const &path);
    static std::string GetFileNameWithoutExtension(std::string const &path);
    static std::string GetFullPath(std::string const &path);
    static std::string GetPathRoot(std::string const &path);
    static bool IsPathRooted(std::string const &path);
};

} // namespace IO
} // namespace System

#endif // _SYSTEM_IO_PATH_H_
