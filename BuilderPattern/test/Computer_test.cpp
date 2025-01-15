/*
 * Computer_test.cpp
 *
 * Created on: Nov 8, 2023
 * Author: Peter Nichols
 */
#include <gtest/gtest.h>

#include <string>

#include "Computer.h"

class BuilderComputerFixture : public ::testing::Test
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

TEST_F(BuilderComputerFixture, ComputerTests_Constructor)
{
    EXPECT_EQ(computer->getCPU().compare(""), 0);
    EXPECT_EQ(computer->getHDD().compare(""), 0);
    EXPECT_EQ(computer->getRAM().compare(""), 0);
    EXPECT_EQ(computer->isIsBluetoothEnabled(), false);
    EXPECT_EQ(computer->isIsGraphicCardEnabled(), false);
}

TEST_F(BuilderComputerFixture, ComputerTests_GetCPU)
{
    computer->setCPU("40 Hz");
    EXPECT_EQ(computer->getCPU().compare("40 Hz"), 0);
}

TEST_F(BuilderComputerFixture, ComputerTests_GetHDD)
{
    computer->setHDD("500 GB");
    EXPECT_EQ(computer->getHDD().compare("500 GB"), 0);
}

TEST_F(BuilderComputerFixture, ComputerTests_GetRAM)
{
    computer->setRAM("4 GB");
    EXPECT_EQ(computer->getRAM().compare("4 GB"), 0);
}

TEST_F(BuilderComputerFixture, ComputerTests_isIsBluetoothEnabled)
{
    EXPECT_EQ(computer->isIsBluetoothEnabled(), false);
}

TEST_F(BuilderComputerFixture, ComputerTests_isIsGraphicCardEnabled)
{
    EXPECT_EQ(computer->isIsGraphicCardEnabled(), false);
}
