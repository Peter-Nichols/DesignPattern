/*
 * Singleton_test.cpp
 *
 *  Created on: Nov 7, 2023
 *      Author: pierrebeldor
 */

#include "Singleton.h"

#include <gtest/gtest.h>

#include <string>
#include <typeinfo>


class SingletonFixture : public ::testing::Test
{
protected:
    patterns::Singleton* singleton;


    void SetUp() override
    {
        //singleton = new patterns::singleton();
    }

    void TearDown() override
    {
        //delete(singleton);
        //singleton = nullptr;
    }
};

TEST_F(SingletonFixture, Singleton2Tests_getInstance)
{
    patterns::Singleton2* instance = patterns::Singleton2::getInstance("My instance");
    
    EXPECT_TRUE(instance != nullptr);

    delete instance;
    instance = nullptr;
}

TEST_F(SingletonFixture, EagerInitializedSingletonTests_getInstance)
{
    patterns::EagerInitializedSingleton* instance = patterns::EagerInitializedSingleton::getInstance();
    
    EXPECT_TRUE(instance != nullptr);

    delete instance;
    instance = nullptr;
}

TEST_F(SingletonFixture, SingletonSafeTests_getInstance)
{
    patterns::SingletonSafe* instance = patterns::SingletonSafe::getInstance("My instance");
    
    EXPECT_TRUE(instance != nullptr);

    delete instance;
    instance = nullptr;
}
