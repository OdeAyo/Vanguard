#include "Engine/Entity/Entity.h"

#include <gtest/gtest.h>

TEST(EntityTest, StoresID)
{
    //Arrange
    Entity agent(007);


    
    EXPECT_EQ(agent.getiD(), 7);

    //ACT
    agent.destroy();

    //Assert
    EXPECT_FALSE(agent.is_active());
}