#pragma once

#include <memory>

#include "Singleton.h"

namespace patterns
{
class TestSingletonPattern
{
public:
    TestSingletonPattern() = delete;

    static EagerInitializedSingleton* testEagerInitializedSingleton();

    static Singleton2* testSingleton2();

    static SingletonSafe* testSingletonSafePtr();

    static std::unique_ptr<SingletonSafe> testSingletonSafeWithUiquePtr();

    static void testSingletonSafe();

};

} // namespace patterns
