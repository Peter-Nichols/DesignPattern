#include <iostream>

#include "Singleton.h"
#include "TestSingletonPattern.h"
#include "TestFactoryPattern.h"
#include "TestAdapterPattern.h"
#include "TestAbstractFactoryPattern.h"

using namespace patterns;

auto main(int argc, char* argv[]) ->int
{
	  TestSingletonPattern::testSingletonSafe();

	  auto val = TestSingletonPattern::testEagerInitializedSingleton();
	  auto val2 = TestSingletonPattern::testSingleton2();
	  std::cout << "The singleton value is: " << val2->getValue() << "\n";

	  std::cout <<"======================  Factory Patterns Tests  ==========================\n";
	  TestFactoryPattern::TestComputerFactory();
  
	  std::cout << "\n========================= Adapter pattern tests ==========================\n\n";
    TestAdapterPattern::testClassAdapter();
    TestAdapterPattern::testObjectAdapter();
	  std::cout <<"\n==================  Abtract Factory Patterns Tests  =====================\n";
	  TestAbstractFactoryPattern::CreateAndPrintComputer();
	
	  return 0;
}
