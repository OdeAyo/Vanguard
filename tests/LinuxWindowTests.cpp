#include "Engine/Platform/Linux/LinuxWindow.h"

#include <gtest/gtest.h>

TEST(LinuxWindow, Lifetime)
{
    LinuxWindow w1;

    w1.create("Game Screen", 64, 32);

    EXPECT_TRUE(w1.is_open());

    EXPECT_EQ(w1.get_height(), 32);
    EXPECT_EQ(w1.get_width(), 64);

    w1.destroy();
    EXPECT_FALSE(w1.is_open());
}