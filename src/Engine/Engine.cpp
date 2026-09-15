#include "Engine/Engine.h"

#include <iostream>
#include <chrono>

void Engine::run()
{
    auto previousTime = std::chrono::steady_clock::now();

    while (p_running) {
        auto currentTime = std::chrono::steady_clock::now();

        std::chrono::duration<float> elapsed = currentTime - previousTime;
        float deltaTime = elapsed.count();

        std::cout << "Delta time: " << deltaTime << '\n';

        previousTime = std::chrono::steady_clock::now();

        // Game logic - inputs, processing, renderer

        

        static int frameCount = 0;  // Whaaaaa?
        ++frameCount;

        if (frameCount >= 100) p_running = false;
    }    
}