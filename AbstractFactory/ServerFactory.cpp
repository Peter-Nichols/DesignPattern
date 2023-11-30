#include "ServerFactory.h"


#include "ServerComputer.h"

namespace patterns
{

ServerFactory::ServerFactory(const std::string& ram, const std::string& hdd, const std::string& cpu)
{
    RAM = ram;
    HDD = hdd;
    CPU = cpu;
}

ComputerInterface* ServerFactory::createComputer()
{
    return new ServerComputer(RAM, HDD, CPU);
}

} // namespace patterns