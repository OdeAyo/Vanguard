#include "Engine/Entity/Entity.h"

Entity::Entity(std::uint32_t iD) : p_iD{iD} {}

std::uint32_t Entity::getiD() const  // const is part of the signature
{
    return p_iD;
}

bool Entity::is_active() const { return p_active; }

void Entity::destroy() { p_active = false; }