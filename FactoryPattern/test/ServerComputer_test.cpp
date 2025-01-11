/*
 * ServerComputer_test.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#include "ServerComputer.h"

#include <gtest/gtest.h>

#include <string>
class ServerComputerFixture : public ::testing::Test
{
protected:
    patterns::ServerComputer* server;


    void SetUp() override
    {
        server = new patterns::ServerComputer();
        //server = new patterns::ServerComputer("10 GB", "500 GB", "2.5 GHz");
    }

    void TearDown() override
    {
        delete(server);
        server = nullptr;
    }
};

TEST_F(ServerComputerFixture, ServerComputerTests_Constructor)
{
    //patterns::ServerComputer* server = new patterns::ServerComputer(patterns::ComputerType::SERVER, "10 GB", "1 TB", "2.0 GHz");

    EXPECT_TRUE(server != nullptr);

    EXPECT_EQ(server->getCPU().compare(""), 0);
    EXPECT_EQ(server->getHDD().compare(""), 0);
    EXPECT_EQ(server->getRAM().compare(""), 0);

    delete server;
    server = nullptr;
}

TEST_F(ServerComputerFixture, ServerComputerTests_Constructor2)
{
    std::string ram = "10 GB";
    std::string hdd = "1 TB";
    std::string cpu = "2.0 GHz";
    patterns::ServerComputer* serverComp = new patterns::ServerComputer(ram, hdd, cpu);

    EXPECT_TRUE(serverComp != nullptr);

    EXPECT_EQ(serverComp->getCPU().compare("2.0 GHz"), 0);
    EXPECT_EQ(serverComp->getHDD().compare("1 TB"), 0);
    EXPECT_EQ(serverComp->getRAM().compare("10 GB"), 0);

    delete serverComp;
    server = nullptr;
}

TEST_F(ServerComputerFixture, ServerComputerTests_SetRAM)
{
    std::string ram = "10 GB";

    EXPECT_EQ(server->getRAM().compare(""), 0);

    server->setRAM(ram);

    EXPECT_EQ(server->getRAM().compare("10 GB"), 0);
}

TEST_F(ServerComputerFixture, ServerComputerTests_SetHDD)
{
    std::string hdd = "1 TB";

    EXPECT_EQ(server->getHDD().compare(""), 0);

    server->setHDD(hdd);

    EXPECT_EQ(server->getHDD().compare("1 TB"), 0);
}

TEST_F(ServerComputerFixture, ServerComputerTests_SetCPU)
{
    std::string cpu = "2.0 GHz";

    EXPECT_EQ(server->getCPU().compare(""), 0);

    server->setCPU(cpu);

    EXPECT_EQ(server->getCPU().compare("2.0 GHz"), 0);
}
