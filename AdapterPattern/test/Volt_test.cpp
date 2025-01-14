#include "Volt.h"

#include <gtest/gtest.h>

#include <string>
#include <typeinfo>


class VoltFixture : public ::testing::Test
{
protected:
    patterns::Volt* volt;


    void SetUp() override
    {
        //volt = new patterns::Volt();
    }

    void TearDown() override
    {
        //delete(volt);
        //volt = nullptr;
    }
};

TEST_F(VoltFixture, VoltTests_Constructor)
{
    volt = new patterns::Volt(12);
    EXPECT_EQ(12, volt->getVolts());
}

TEST_F(VoltFixture, VoltTests_getVolts)
{
    volt = new patterns::Volt(0);
    EXPECT_EQ(0, volt->getVolts());

    volt = new patterns::Volt(6);
    EXPECT_EQ(6, volt->getVolts());

    delete volt;
    volt = nullptr;
}

TEST_F(VoltFixture, VoltTests_setVolts)
{
    volt = new patterns::Volt(0);
    EXPECT_EQ(0, volt->getVolts());

    volt->setVolts(12);
    EXPECT_EQ(12, volt->getVolts());

    volt->setVolts(3);
    EXPECT_EQ(3, volt->getVolts());
}
