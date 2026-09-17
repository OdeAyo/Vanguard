#include "Engine/Platform/LinuxPlatform.h"

#include <iostream>

void LinuxPlatform::initialise()
{
    std::cout << "Linux start mate" << '\n';
}

void LinuxPlatform::shutdown()
{
    std::cout << "Linux sleep mate" << '\n';
}
