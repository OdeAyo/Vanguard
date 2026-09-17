#pragma once

#include "Engine/Entity/Transform.h"

#include <cstdint>

class Entity {
   public:
    explicit Entity(std::uint32_t iD);
    std::uint32_t getiD() const;
    bool is_active() const;
    void destroy();

    Transform& get_transform(); // allows us to change
    //const before, this ont change the returned value, const after means class will not change through this
    const Transform& get_transform() const; // allows us to give another identifier access to read, and gets updated as the actual object does, but cant be modified by that identifier

   private:
    bool p_active = true;
    std::uint32_t p_iD;
    Transform p_transform;

};