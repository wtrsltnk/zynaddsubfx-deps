#ifndef _SYSTEM_IO_FILE_H_
#define _SYSTEM_IO_FILE_H_

#include <string>
#include <vector>

namespace System {
namespace IO {

class File
{
public:
    // Appends lines to a file, and then closes the file. If the specified file does not exist, this method creates a file, writes the specified lines to the file, and then closes the file.
    static void AppendAllLines(std::string const &path, std::vector<std::string> const &lines);

    // Opens a file, appends the specified string to the file, and then closes the file. If the file does not exist, this method creates a file, writes the specified string to the file, then closes the file.
    static void AppendAllText(std::string const &path, std::string const &text);

    // Copies an existing file to a new file. Overwriting a file of the same name is not allowed.
    static void Copy(std::string const &sourceFileName, std::string const &destFileName);

    // Copies an existing file to a new file. Overwriting a file of the same name is allowed.
    static void Copy(std::string const &sourceFileName, std::string const &destFileName, bool overwrite);

    // Deletes the specified file.
    static void Delete(std::string const &path);

    // Determines whether the specified file exists.
    static bool Exists(std::string const &path);

    // Moves a specified file to a new location, providing the option to specify a new file name.
    static void Move(std::string const &sourceFileName, std::string const &destFileName);

    // Opens a binary file, reads the contents of the file into a byte array, and then closes the file.
    static std::vector<unsigned char> ReadAllBytes(std::string const &path);

    // Opens a text file, reads all lines of the file, and then closes the file.
    static std::vector<std::string> ReadAllLines(std::string const &path);

    // Opens a text file, reads all lines of the file, and then closes the file.
    static std::string ReadAllText(std::string const &path);

    // Creates a new file, writes the specified byte array to the file, and then closes the file. If the target file already exists, it is overwritten.
    static void WriteAllBytes(std::string const &path, std::vector<unsigned char> const &bytes);

    // Creates a new file, writes a collection of strings to the file, and then closes the file.
    static void WriteAllLines(std::string const &path, std::vector<std::string> const &lines);

    // Creates a new file, writes the specified string to the file, and then closes the file. If the target file already exists, it is overwritten.
    static void WriteAllText(std::string const &path, std::string const &text);
};

} // namespace IO
} // namespace System

#endif // _SYSTEM_IO_FILE_H_
