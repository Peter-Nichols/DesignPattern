/*
#include <gtest/gtest.h>

#include <string>
#include <typeinfo>


class ComputerAbstractFactoryFixture : public ::testing::Test
{
protected:
    patterns::ComputerAbstractFactory* computerAbstractFactory;


    void SetUp() override
    {
        computerAbstractFactory = new patterns::computerAbstractFactory();
    }

    void TearDown() override
    {
        delete(computerAbstractFactory);
        computerAbstractFactory = nullptr;
    }
};

TEST_F(ComputerAbstractFactoryFixture, ComputerAbstractFactoryTests_Constructor)
{
    EXPECT_EQ(0, 0);
}
*/
