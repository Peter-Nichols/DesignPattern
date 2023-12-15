/*
 * Computer_test.cpp
 *
 * Created on: Nov 8, 2023
 * Author: Peter Nichols
 */
#include <gtest/gtest.h>

#include <string>

#include "Computer.h"

class ComputerFixture : public ::testing::Test
{
protected:
    patterns::Computer* computer;


    void SetUp() override
    {
        computer = new patterns::Computer();
    }

    void TearDown() override
    {
        delete(computer);
        computer = nullptr;
    }
};

TEST_F(ComputerFixture, ComputerTests_Constructor)
{
    EXPECT_EQ(computer->getCPU().compare(""), 0);
    EXPECT_EQ(computer->getHDD().compare(""), 0);
    EXPECT_EQ(computer->getRAM().compare(""), 0);
    EXPECT_EQ(computer->isIsBluetoothEnabled(), false);
    EXPECT_EQ(computer->isIsGraphicCardEnabled(), false);
}

TEST_F(ComputerFixture, ComputerTests_GetCPU)
{
    computer->setCPU("40Hz");
    EXPECT_EQ(computer->getCPU().compare("40Hz"), 0);
}
