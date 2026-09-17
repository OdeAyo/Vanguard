#include "Engine/Core/FileHandler.h"

#include <gtest/gtest.h>

TEST(FileHandlerTest, MoveConstructor)
{
    //Arrange
    FileHandler file1{"README.md"};
    EXPECT_TRUE(file1.is_open());

    FileHandler file2 {std::move(file1)};

    //Assert
    EXPECT_FALSE(file1.is_open());
    EXPECT_TRUE(file2.is_open());
    
}