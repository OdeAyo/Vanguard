#include "Engine/Platform/Window.h"

class LinuxWindow : public Window
{
    public:

    void create(
        const std::string& title,
        std::uint32_t width,
        std::uint32_t height
    ) override;

    void destroy() override;
    bool is_open() const override;

    std::uint32_t get_width() const override;
    std::uint32_t get_height() const override;

    private:
    std::string p_title;
    std::uint32_t p_height;
    std::uint32_t p_width;
    bool p_open;


};