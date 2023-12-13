
#include "Dollar50Dispense.h"

#include <iostream>

namespace patterns
{
void Dollar50Dispense::setNextChain(DispenseChainInterface* nextChain)
{
    chain = nextChain;
}

void Dollar50Dispense::dispense(Currency* cur)
{
    if (cur->getAmount() >= 50)
    {
        int num = cur->getAmount() / 50;
        int remainder = cur->getAmount() % 50;

        std::cout << "Dispensing " << num << " 50$ note\n";

        if (remainder != 0)
        {
            chain->dispense(new Currency(remainder));
        }
    }
    else
    {
        chain->dispense(cur);
    }
    
}
} // namespace patterns
