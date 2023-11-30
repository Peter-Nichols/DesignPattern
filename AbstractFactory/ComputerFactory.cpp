#include "ComputerFactory.h"

#include "ComputerInterface.h"


namespace patterns
{

ComputerInterface* ComputerFactory::getComputer(ComputerAbstractFactory *factory)
{
    return factory->createComputer();
}

} // namespace patterns
