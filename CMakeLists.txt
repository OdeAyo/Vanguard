cmake_minimum_required(VERSION 3.20) #states what version we need, always the first

project(Vanguard LANGUAGES CXX) #name of project, local file root and languages so it know what compiler to use

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#what to ~(execute) eh uhhhh, what to compile
add_executable(Vanguard   
	src/main.cpp
	src/Engine/Engine.cpp
	src/Engine/Entity/Entity.cpp
	src/Engine/Core/FileHandler.cpp
)
#obvious, includes all in the folder
target_include_directories(Vanguard PRIVATE
	include
)


#cmake -S . -B build - : -S is to locate source directory -B creates a build system in s build folder
#cmake --build build   : use the build system in the build folder to compile linke and run the generated .exe
