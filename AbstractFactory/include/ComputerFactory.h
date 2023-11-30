#pragma once

#include "ComputerInterface.h"
#include "ComputerAbstractFactory.h"

namespace patterns
{
class ComputerFactory
{
public:
    static ComputerInterface* getComputer(ComputerAbstractFactory* factory);
};    
    
} // namespace patterns
