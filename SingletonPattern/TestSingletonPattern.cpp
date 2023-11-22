

#include "TestSingletonPattern.h"

#include <iostream>
#include <thread>

namespace patterns
{
void Thread1()
 {
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
 
     SingletonSafe* singletonInstance = SingletonSafe::getInstance("Thread1");
 
     std::cout << singletonInstance->getValue() << "\n";
 }
 
 void Thread2()
 {
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
 
     SingletonSafe* singletonInstance = SingletonSafe::getInstance("Thread2");
 
     std::cout << singletonInstance->getValue() << "\n";
 }
 
 void Thread3()
 {
     std::this_thread::sleep_for(std::chrono::milliseconds(1000));
 
     SingletonSafe* singletonInstance = SingletonSafe::getInstance("Thread3");
 
     std::cout << singletonInstance->getValue() << "\n";
 }


EagerInitializedSingleton* TestSingletonPattern::testEagerInitializedSingleton()
{
    return EagerInitializedSingleton::getInstance();
}

Singleton2* TestSingletonPattern::testSingleton2()
{
    return Singleton2::getInstance("Pierre Beldor");
}

SingletonSafe* TestSingletonPattern::testSingletonSafePtr()
{
    return SingletonSafe::getInstance( "Pierre Beldor");
}

std::unique_ptr<SingletonSafe> TestSingletonPattern::testSingletonSafeWithUiquePtr()
{
    return std::unique_ptr<SingletonSafe>();
}

/// @brief 
void TestSingletonPattern::testSingletonSafe()
{
     std::thread t1(Thread1);
     std::thread t2(Thread2);
     std::thread t3(Thread3);
 
     t1.join();
     t2.join();
     t3.join();
}

} // namespace patterns
