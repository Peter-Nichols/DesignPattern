
#include "ATMDispenseChain.h"

#include "Dollar10Dispense.h"
#include "Dollar20Dispense.h"
#include "Dollar50Dispense.h"

namespace patterns
{
ATMDispenseChain::ATMDispenseChain()
{
    chain1 = new Dollar50Dispense();
    DispenseChainInterface* chain2 = new Dollar20Dispense();
    DispenseChainInterface* chain3 = new Dollar10Dispense();

    //Set the chain of responsibility
    chain1->setNextChain(chain2);
    chain2->setNextChain(chain3);
}

ATMDispenseChain::~ATMDispenseChain()
{
    if (chain1 != nullptr)
    {
        delete(chain1);
        chain1 = nullptr;
    }
}

DispenseChainInterface* ATMDispenseChain::getChainOfResponsibility()
{
    return chain1;
}
} // namespace patterns

