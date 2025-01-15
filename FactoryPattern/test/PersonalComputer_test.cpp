/*
 * PersonalComputer_test.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#include "PersonalComputer.h"

#include <gtest/gtest.h>

#include <string>


class PersonalComputerFixture : public ::testing::Test
{
protected:
    patterns::PersonalComputer* computer;


    void SetUp() override
    {
        computer = new patterns::PersonalComputer();
    }

    void TearDown() override
    {
        delete(computer);
        computer = nullptr;
    }
};


TEST_F(PersonalComputerFixture, PersonalComputerTests_Constructor)
{
    EXPECT_TRUE(computer != nullptr);

    EXPECT_EQ(computer->getCPU().compare(""), 0);
    EXPECT_EQ(computer->getHDD().compare(""), 0);
    EXPECT_EQ(computer->getRAM().compare(""), 0);

    delete computer;
    computer = nullptr;
}

TEST_F(PersonalComputerFixture, PersonalComputerTests_Constructor2)
{
    std::string ram = "10 GB";
    std::string hdd = "1 TB";
    std::string cpu = "2.0 GHz";
    patterns::PersonalComputer* personalComp = new patterns::PersonalComputer(ram, hdd, cpu);

    EXPECT_TRUE(personalComp != nullptr);

    EXPECT_EQ(personalComp->getCPU().compare("2.0 GHz"), 0);
    EXPECT_EQ(personalComp->getHDD().compare("1 TB"), 0);
    EXPECT_EQ(personalComp->getRAM().compare("10 GB"), 0);

    delete personalComp;
    personalComp = nullptr;
}

TEST_F(PersonalComputerFixture, PersonalComputerTests_SetRAM)
{
    std::string ram = "10 GB";

    EXPECT_EQ(computer->getRAM().compare(""), 0);

    computer->setRAM(ram);

    EXPECT_EQ(computer->getRAM().compare("10 GB"), 0);
}

TEST_F(PersonalComputerFixture, PersonalComputerTests_SetHDD)
{
    std::string hdd = "1 TB";

    EXPECT_EQ(computer->getHDD().compare(""), 0);

    computer->setHDD(hdd);

    EXPECT_EQ(computer->getHDD().compare("1 TB"), 0);
}

TEST_F(PersonalComputerFixture, PersonalComputerTests_SetCPU)
{
    std::string cpu = "2.0 GHz";

    EXPECT_EQ(computer->getCPU().compare(""), 0);

    computer->setCPU(cpu);

    EXPECT_EQ(computer->getCPU().compare("2.0 GHz"), 0);
}

