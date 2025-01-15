#include "ComputerFactory.h"
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
}

