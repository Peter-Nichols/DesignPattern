
#include "Dollar10Dispense.h"

#include <iostream>

namespace patterns
{
void Dollar10Dispense::setNextChain(DispenseChainInterface* nextChain)
{
    chain = nextChain;
}

void Dollar10Dispense::dispense(Currency* cur)
{
    if (cur->getAmount() >= 10)
    {
        int num = cur->getAmount() / 10;
        int remainder = cur->getAmount() % 10;

        std::cout << "Dispensing " << num << " 10$ note\n";

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
