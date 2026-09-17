#pragma once
#include <cstdio>
#include <string>

class FileHandler
{
    public:
    explicit FileHandler(const std::string& path); //prevents hidden resource acquisition by requiring every instance of this, even temp variables, needing FileHandler(std::string)
    ~FileHandler();

    FileHandler(const FileHandler& f1) = delete;
    FileHandler operator=(const FileHandler& f1) = delete;

    FileHandler(FileHandler&& other); //eh uh other, wrote f1
    FileHandler& operator=(FileHandler&& other); //eh uh other, wrote f1

    bool is_open() const;

    private:
    std::FILE* p_file = nullptr;
};