#include "Engine/Platform/Linux/LinuxWindow.h"

#include <iostream>


void LinuxWindow::create(
    const std::string& title,
    std::uint32_t width,
    std::uint32_t height
)
{

    p_title = title;
    p_width = width;
    p_height = height;

    p_open = true;/*
    std::cout << "Creating a window called: "
    << p_title 
    << "of height: "
    << p_height
    << "of width: "
    << p_width
    << '\n';*/


}

void LinuxWindow::destroy()
{
    p_open = false;
}
bool LinuxWindow::is_open() const
{
    return p_open;
}

std::uint32_t LinuxWindow::get_width() const
{
    return p_width;
}
std::uint32_t LinuxWindow::get_height() const
{
    return p_height;
}
