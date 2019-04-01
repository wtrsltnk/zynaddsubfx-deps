#ifndef _SYSTEM_IO_FILESYSTEMINFO_H_
#define _SYSTEM_IO_FILESYSTEMINFO_H_

#include <string>

namespace System {
namespace IO {

class FileSystemInfo
{
protected:
    std::string _originalPath;
    std::string _fullPath;

    FileSystemInfo();

public:
    virtual ~FileSystemInfo();

    virtual std::string Name() const = 0;
    virtual std::string FullName() const;
    virtual std::string Extension() const;
    virtual bool Exists() const;
};

} // namespace IO
} // namespace System

#endif // _SYSTEM_IO_FILESYSTEMINFO_H_
