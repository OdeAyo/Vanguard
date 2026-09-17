cmake_minimum_required(VERSION 3.20) #states what version we need, always the first

project(Vanguard LANGUAGES CXX) #name of project, local file root and languages so it know what compiler to use

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
	googletests
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG v1.15.2
)

FetchContent_MakeAvailable(googletests)



#what to ~(execute) eh uhhhh, what to compile
add_executable(Vanguard   
	src/main.cpp
	src/Engine/Engine.cpp
	src/Engine/Entity/Entity.cpp
	src/Engine/Core/FileHandler.cpp
	src/Engine/Platform/LinuxPlatform.cpp
	src/Engine/Platform/Linux/LinuxWindow.cpp
)
#obvious, includes all in the folder
target_include_directories(Vanguard PRIVATE
	include
)

#same as above
add_executable(VanguardTests
	tests/EntityTests.cpp
	src/Engine/Entity/Entity.cpp

	tests/FileHandlerTests.cpp
	src/Engine/Core/FileHandler.cpp

	tests/LinuxWindowTests.cpp
	src/Engine/Platform/Linux/LinuxWindow.cpp
)

target_include_directories(VanguardTests PRIVATE
	include
)
#so we can use TEST(test_group, name) as is without main or anything

target_link_libraries(VanguardTests PRIVATE
	GTest::gtest_main
)
#commandline stuff i think
include(GoogleTest)

gtest_discover_tests(VanguardTests)





#cmake -S . -B build - : -S is to locate source directory -B creates a build system in s build folder
#cmake --build build   : use the build system in the build folder to compile linke and run the generated .exe

