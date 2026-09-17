#include "Engine/Engine.h"
#include "Engine/Entity/Entity.h"
#include "Engine/Core/FileHandler.h"

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

        //START

        FileHandler file1{"README.md"};
        std::cout << "file1: " << file1.is_open() << '\n';
        FileHandler file2 {std::move(file1)};

        std::cout << "file1: " << file1.is_open() << '\n';
        std::cout << "file2: " << file2.is_open() << '\n';
        
        Entity agent(007);

        agent.get_transform().position.x = 10;
        agent.get_transform().position.y = 5;
        agent.get_transform().position.z = 2;

        const Entity& agentView = agent;

        std::cout << agentView.get_transform().position.x << '\n'
        << agentView.get_transform().position.y << '\n'
        << agentView.get_transform().position.z << '\n';

        agent.get_transform().position.y = 100.4;

        std::cout << agentView.get_transform().position.x << '\n'
        << agentView.get_transform().position.y << '\n'
        << agentView.get_transform().position.z << '\n';
        

        


        //END

        

        static int frameCount = 0;  // Whaaaaa?
        ++frameCount;

        if (frameCount >= 1) p_running = false;
    }    
}