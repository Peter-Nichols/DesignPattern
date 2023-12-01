
#include "TestAbstractFactoryPattern.h"

#include "ComputerInterface.h"
#include "ComputerFactory.h"
#include "PersonalComputer.h"
#include "PersonalComputerFactory.h"
#include "ServerComputer.h"
#include "ServerFactory.h"

namespace patterns
{
void TestAbstractFactoryPattern::CreateAndPrintComputer()
{
    ComputerInterface* pc = ComputerFactory::getComputer(new PersonalComputerFactory("4 GB", "500 GB", "2.5 GHz")); 
    ComputerInterface* server = ComputerFactory::getComputer(new ServerFactory("16 GB", "1 TB", "2.9 GHz"));
 
    pc->print();
    server->print();
}
} // namespace patterns
