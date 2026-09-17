#pragma once

class PlatformInterface
{
    public:
        virtual ~PlatformInterface() = default; //public and virtual or private and protected 

        virtual void initialise() = 0; // no implementation since its a base class
        virtual void shutdown() = 0;
};