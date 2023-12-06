#include <gtest/gtest.h>

namespace{
    int GetMeaningOfLife()
    {
        return 49;
    }
}

TEST(TestTopic, TestGetMeaningOfLife)
{
    EXPECT_EQ(GetMeaningOfLife(), 49);  
}

TEST(TesTopic, TestMeaningOfLifeFailing)
{
    EXPECT_EQ(GetMeaningOfLife(), 0) << "This is a mistake!";  
}