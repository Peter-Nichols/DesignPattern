/*
 * ComputerFactory_test.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#include "ComputerFactory.h"
#include "ComputerInterface.h"
#include "PersonalComputer.h"
#include "ServerComputer.h"

#include <gtest/gtest.h>

#include <string>
#include <typeinfo>


class ComputerFactoryFixture : public ::testing::Test
{
protected:
    patterns::ComputerFactory* computerFactory;


    void SetUp() override
    {
        computerFactory = new patterns::ComputerFactory();
    }

    void TearDown() override
    {
        delete(computerFactory);
        computerFactory = nullptr;
    }
};

TEST_F(ComputerFactoryFixture, ComputerFactoryTests_Constructor)
{
    EXPECT_EQ(0, 0);
    //EXPECT_EQ(computer->getHDD().compare(""), 0);
    //EXPECT_EQ(computer->getRAM().compare(""), 0);
    //EXPECT_EQ(computer->isIsBluetoothEnabled(), false);
    //EXPECT_EQ(computer->isIsGraphicCardEnabled(), false);
}

TEST_F(ComputerFactoryFixture, ComputerFactoryTests_GetComputer)
{
    patterns::ComputerInterface* compInt = computerFactory->getComputer(patterns::ComputerType::PC, "4 GB", "500 GB", "2.5 GHz");

    EXPECT_TRUE(compInt != nullptr);

    EXPECT_TRUE(typeid(patterns::PersonalComputer) == typeid(*compInt));

    EXPECT_EQ(compInt->getCPU().compare("2.5 GHz"), 0);
    EXPECT_EQ(compInt->getHDD().compare("500 GB"), 0);
    EXPECT_EQ(compInt->getRAM().compare("4 GB"), 0);
}

TEST_F(ComputerFactoryFixture, ComputerFactoryTests_GetComputer2)
{
    patterns::ComputerInterface* compInt = computerFactory->getComputer(patterns::ComputerType::SERVER, "4 GB", "500 GB", "2.5 GHz");

    EXPECT_TRUE(compInt != nullptr);
    EXPECT_TRUE(typeid(patterns::ServerComputer) == typeid(*compInt));

    EXPECT_EQ(compInt->getCPU().compare("2.5 GHz"), 0);
    EXPECT_EQ(compInt->getHDD().compare("500 GB"), 0);
    EXPECT_EQ(compInt->getRAM().compare("4 GB"), 0);
}

TEST_F(ComputerFactoryFixture, ComputerFactoryTests_GetComputer3)
{
    patterns::ComputerInterface* compInt = computerFactory->getComputer(patterns::ComputerType(3), "4 GB", "500 GB", "2.5 GHz");

    EXPECT_TRUE(compInt == nullptr);
}

