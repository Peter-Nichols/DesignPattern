
#include "Socket.h"
#include "Volt.h"

#include <gtest/gtest.h>

#include <string>
#include <typeinfo>


class SocketFixture : public ::testing::Test
{
protected:
    patterns::Socket* socket;

    void SetUp() override
    {
        socket = new patterns::Socket();
    }

    void TearDown() override
    {
        delete(socket);
        socket = nullptr;
    }
};

TEST_F(SocketFixture, SocketTests_Constructor)
{
   EXPECT_EQ(0, 0);
}

TEST_F(SocketFixture, SocketTests_GetVolt)
{
    patterns::Volt* volt = socket->getVolt();
    EXPECT_EQ(120, volt->getVolts());
}
