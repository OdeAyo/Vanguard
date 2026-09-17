#include "Engine/Core/FileHandler.h"

FileHandler::FileHandler(const std::string& path)
{
    p_file = std::fopen(path.c_str(), "r");
}
FileHandler::~FileHandler()
{
    if (p_file){
        std::fclose(p_file);
    }
}


FileHandler::FileHandler(FileHandler&& other)
{
    p_file = other.p_file;
    other.p_file = nullptr;
}

//essentially this.=(other), other moves to this
FileHandler& FileHandler::operator=(FileHandler&& other)
{
    if (this != &other)
    {
        if(p_file)
            {
                std::fclose(p_file);
            }

        p_file = other.p_file;
        other.p_file = nullptr;
    }
    return *this;

}

bool FileHandler::is_open() const
{
    return p_file != nullptr;
}

//ideally handle read and write and creation and append, then replace with i/ostream and filesystem