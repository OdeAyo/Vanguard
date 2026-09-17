#pragma once
#include "Engine/Platform/Platform.h"


class LinuxPlatform : public PlatformInterface
{
    public:
    void initialise() override;
    void shutdown() override;
};