#ifndef _SYSTEM_IO_DIRECTORYINFO_H_
#define _SYSTEM_IO_DIRECTORYINFO_H_

#include "system.io.filesysteminfo.h"
#include <string>
#include <vector>

namespace System {
namespace IO {

class DirectoryInfo : public FileSystemInfo
{
    std::string _name;
    void Init(std::string const &path);

public:
    DirectoryInfo(std::string const &path);
    virtual ~DirectoryInfo();

    DirectoryInfo Parent() const;
    DirectoryInfo Root() const;
    std::string Name() const;
    virtual bool Exists() const;
    void Create() const;

    std::vector<std::string> GetDirectories() const;
    std::vector<std::string> GetDirectories(std::string const &searchPattern) const;
    std::vector<std::string> GetFiles() const;
    std::vector<std::string> GetFiles(std::string const &searchPattern) const;

    bool operator==(const DirectoryInfo &other) const;
};

} // namespace IO
} // namespace System

#endif // _SYSTEM_IO_DIRECTORYINFO_H_
