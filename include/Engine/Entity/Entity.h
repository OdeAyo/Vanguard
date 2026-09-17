#pragma once

#include <cstdint>

class Entity {
   public:
    explicit Entity(std::uint32_t iD);
    std::uint32_t getiD() const;
    bool is_active() const;
    void destroy();

   private:
    bool p_active = true;
    std::uint32_t p_iD;
};