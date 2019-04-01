#ifndef SYSTEM_IO_DIRECTORY_H
#define SYSTEM_IO_DIRECTORY_H

#include <string>
#include <vector>

namespace System {
namespace IO {

class Directory
{
public:
    // Creates all directories and subdirectories in the specified path unless they already exist.
    static bool CreateDirectoryFromPath(std::string const &path);

    // Deletes an empty directory from a specified path.
    static void Delete(std::string const &path);

    // Deletes the specified directory and, if indicated, any subdirectories and files in the directory.
    static void Delete(std::string const &path, bool recursive);

    // Determines whether the given path refers to an existing directory on disk.
    static bool Exists(std::string const &path);

    // Gets the current working directory of the application.
    static std::string GetCurrentWorkingDirectory();

    // Returns the names of subdirectories (including their paths) in the specified directory.
    static std::vector<std::string> GetDirectories(std::string const &path);

    // Returns the names of subdirectories (including their paths) that match the specified search pattern in the specified directory.
    static std::vector<std::string> GetDirectories(std::string const &path, std::string const &searchPattern);

    // Returns the names of files (including their paths) in the specified directory.
    static std::vector<std::string> GetFiles(std::string const &path);

    // Returns the names of files (including their paths) that match the specified search pattern in the specified directory.
    static std::vector<std::string> GetFiles(std::string const &path, std::string const &searchPattern);
};

} // namespace IO
} // namespace System

#endif // SYSTEM_IO_DIRECTORY_H
