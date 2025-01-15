/*
 * Computer_test.cpp
 *
 * Created on: Nov 8, 2023
 * Author: Peter Nichols
 */
#include <gtest/gtest.h>

#include <string>

#include "Computer.h"

class ComputerBuilderFixture : public ::testing::Test
{
protected:
    patterns::Computer* computerBuilder;

    void SetUp() override
    {
        computerBuilder = new patterns::Computer();
    }

    void TearDown() override
    {
        delete(computerBuilder);
        computerBuilder = nullptr;
    }
};

TEST_F(ComputerBuilderFixture, ComputerBuilderTests_Constructor)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("500 GB", "8 GB", "32 KHz");
    EXPECT_EQ(builder->getHDD().compare("500 GB"), 0);
    EXPECT_EQ(builder->getRAM().compare("8 GB"), 0);
    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);

    delete builder;
    builder = nullptr;
}
/*
TEST_F(ComputerBuilderFixture, ComputerTests_GetCPU)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("500 GB", "8 GB", "32 KHz");
    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);

    computer->setCPU("40 Hz");
    EXPECT_EQ(computer->getCPU().compare("40 Hz"), 0);

    delete builder;
    builder = nullptr;
}
*/
TEST_F(ComputerBuilderFixture, ComputerBuilderTests_GetHDD)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("", "", "");

    EXPECT_EQ(builder->getHDD().compare(""), 0);

    builder->setHDD("500 GB");
    EXPECT_EQ(builder->getHDD().compare("500 GB"), 0);

    delete builder;
    builder = nullptr;
}

TEST_F(ComputerBuilderFixture, ComputerBuilderTests_GetRAM)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("", "", "");

    EXPECT_EQ(builder->getRAM().compare(""), 0);

    builder->setRAM("4 GB");
    EXPECT_EQ(builder->getRAM().compare("4 GB"), 0);

    delete builder;
    builder = nullptr;
}
/*
TEST_F(ComputerBuilderFixture, ComputerBuilderTests_isIsBluetoothEnabled)
{
    EXPECT_EQ(computer->isIsBluetoothEnabled(), false);
}

TEST_F(ComputerBuilderFixture, ComputerBuilderTests_isIsGraphicCardEnabled)
{
    EXPECT_EQ(computer->isIsGraphicCardEnabled(), false);
}
*/
TEST_F(ComputerBuilderFixture, ComputerBuilderTests_SetIsBluetoothEnabled)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("500 GB", "8 GB", "32 KHz");

    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);

    builder->setIsBluetoothEnabled(true);
    EXPECT_EQ(builder->isIsBluetoothEnabled(), true);

    builder->setIsBluetoothEnabled(false);
    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);

    delete builder;
    builder = nullptr;
}

TEST_F(ComputerBuilderFixture, ComputerBuilderTests_SetIsGraphicardEnabled)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("500 GB", "8 GB", "32 KHz");

    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);

    builder->setIsGraphicCardEnabled(true);
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), true);

    builder->setIsGraphicCardEnabled(false);
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);

    delete builder;
    builder = nullptr;
}


TEST_F(ComputerBuilderFixture, ComputerBuilderTests_SetBluetoothEnabled)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("500 GB", "8 GB", "32 KHz");

    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);

    patterns::ComputerBuilder* newBuilder = builder->setBluetoothEnabled(true);

    EXPECT_EQ(builder->isIsBluetoothEnabled(), true);
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);

    EXPECT_EQ(builder->isIsBluetoothEnabled(), newBuilder->isIsBluetoothEnabled());
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), newBuilder->isIsGraphicCardEnabled());

    patterns::ComputerBuilder* newBuilder2 = newBuilder->setBluetoothEnabled(false);
    EXPECT_EQ(newBuilder2->isIsBluetoothEnabled(), false);

    delete newBuilder2;
    newBuilder2 = nullptr;
}

TEST_F(ComputerBuilderFixture, ComputerBuilderTests_SetGraphicardEnabled)
{
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder("500 GB", "8 GB", "32 KHz");

    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);

    patterns::ComputerBuilder* newBuilder = builder->setGraphicCardEnabled(true);

    EXPECT_EQ(builder->isIsGraphicCardEnabled(), true);
    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);

    EXPECT_EQ(builder->isIsBluetoothEnabled(), newBuilder->isIsBluetoothEnabled());
    EXPECT_EQ(builder->isIsGraphicCardEnabled(), newBuilder->isIsGraphicCardEnabled());

    patterns::ComputerBuilder* newBuilder2 = newBuilder->setGraphicCardEnabled(false);
    EXPECT_EQ(newBuilder2->isIsGraphicCardEnabled(), false);

    delete newBuilder2;
    newBuilder2 = nullptr;
}

TEST_F(ComputerBuilderFixture, ComputerBuilderTests_build)
{
    const std::string cpu = "32 KHz";
    const std::string hdd = "500 GB";
    const std::string ram = "8 GB";
    patterns::ComputerBuilder* builder = new patterns::ComputerBuilder(hdd, ram, cpu);

    EXPECT_EQ(builder->isIsGraphicCardEnabled(), false);
    EXPECT_EQ(builder->isIsBluetoothEnabled(), false);

    patterns::ComputerBuilder* newBuilder = builder->setBluetoothEnabled(true)->setGraphicCardEnabled(true);

    EXPECT_EQ(builder->isIsGraphicCardEnabled(), true);
    EXPECT_EQ(builder->isIsBluetoothEnabled(), true);

    //FUT
    patterns::Computer computer = newBuilder->build();

    EXPECT_EQ(computer.getHDD().compare(hdd), 0);
    EXPECT_EQ(computer.getRAM().compare(ram), 0);
    EXPECT_EQ(computer.getCPU().compare(cpu), 0);

    EXPECT_EQ(computer.isIsBluetoothEnabled(), true);
    EXPECT_EQ(computer.isIsBluetoothEnabled(), true);

    delete newBuilder;
    newBuilder = nullptr;
}
