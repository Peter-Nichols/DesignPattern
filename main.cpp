#include <iostream>

#include "Singleton.h"
#include "TestSingletonPattern.h"


using namespace patterns;

auto main(int argc, char* argv[]) ->int
{
	TestSingletonPattern::testSingletonSafe();

	auto val = TestSingletonPattern::testEagerInitializedSingleton();
	auto val2 = TestSingletonPattern::testSingleton2();
	std::cout << "The singleton value is: " << val2->getValue() << "\n";
	return 0;
}
