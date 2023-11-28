
#include "TestFactoryPattern.h"

#include "ComputerInterface.h"
#include "ServerComputer.h"
#include "PersonalComputer.h"
#include "ComputerFactory.h"
namespace patterns
{
void TestFactoryPattern::TestComputerFactory()
{
    ComputerInterface* pc = ComputerFactory::getComputer(ComputerType::PC, "2 GB", "500 GB", "2.4 GHz");
    pc->print();

    ComputerInterface* server = ComputerFactory::getComputer(ComputerType::SERVER, "16 GB", "1 TB", "2.9 GHz");
    server->print();
}
} // namespace patterns
