#ifndef FILESTREAM_HPP
#define FILESTREAM_HPP

#include <string>

class FileStream {
public:
    FileStream() = default;
    ~FileStream() = default;

    static std::string read(const std::string& path);
    static void write(const std::string& path, const std::string& content);
    static void append(const std::string& path, const std::string& content);
    static void erase(const std::string& path);
    static bool exists(const std::string& path);
    static bool isDirectory(const std::string& path);

private:
    std::string path;
    std::string content;
};

#endif //FILESTREAM_HPP
