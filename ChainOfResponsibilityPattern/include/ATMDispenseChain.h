#pragma once

#include "DispenseChainInterface.h"

namespace patterns
{
class ATMDispenseChain
{
private:
    DispenseChainInterface* chain1;

public:
    ATMDispenseChain();
    virtual ~ATMDispenseChain();

    DispenseChainInterface* getChainOfResponsibility();
};

} // namespace patterns
