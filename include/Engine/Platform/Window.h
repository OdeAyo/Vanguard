#pragma once

#include <cstdint>
#include <string>

class Window
{
    public:
    virtual void create(
        const std::string& title,
        std::uint32_t width,
        std::uint32_t height
    ) = 0;

    virtual void destroy() = 0;
    virtual bool is_open() const = 0;

    virtual std::uint32_t get_width() const = 0;
    virtual std::uint32_t get_height() const = 0;
};