#include <iostream>

#include "Singleton.h"
#include "TestSingletonPattern.h"
#include "TestFactoryPattern.h"
#include "TestAdapterPattern.h"
#include "TestAbstractFactoryPattern.h"
#include "TestBuilderPattern.h"
#include "TestCompositePattern.h"

using namespace patterns;

template <typename... T>
auto average(T... t)
{
	return (t * ...) / sizeof...(t);
}

template <typename... T>
auto something(T... t)
{
	const int n = 5;
	return (t * ... * 5);
}

template <typename... Funcs>
auto sumFuncs(Funcs... f)
{
	return (f() + ...);
}




auto main(int argc, char* argv[]) ->int
{
    TestSingletonPattern::testSingletonSafe();

    [[maybe_unused]] auto val = TestSingletonPattern::testEagerInitializedSingleton();
    [[maybe_unused]]  auto val2 = TestSingletonPattern::testSingleton2();
    std::cout << "The singleton value is: " << val2->getValue() << "\n";

    std::cout <<"=========================  Factory Patterns Tests  ==========================\n";
    TestFactoryPattern::TestComputerFactory();

    std::cout << "\n======================== Adapter pattern tests ==========================\n\n";
    TestAdapterPattern::testClassAdapter();
    TestAdapterPattern::testObjectAdapter();
    std::cout <<"\n====================  Abstract Factory Patterns Tests  =====================\n";
    TestAbstractFactoryPattern::CreateAndPrintComputer();

	std::cout <<"\n========================  Builder Patterns Tests  =========================\n";
	TestBuilderPattern::BuildAndPrintComputer();

    std::cout <<"\n=======================  Composite Patterns Tests  ========================\n";
    TestCompositePattern::testShapeDrawing();

    return 0;
}
