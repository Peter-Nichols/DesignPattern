
#include "Dollar20Dispense.h"

#include <iostream>

namespace patterns
{
void Dollar20Dispense::setNextChain(DispenseChainInterface* nextChain)
{
    chain = nextChain;
}

void Dollar20Dispense::dispense(Currency* cur)
{
    if (cur->getAmount() >= 20)
    {
        int num = cur->getAmount() / 20;
        int remainder = cur->getAmount() % 20;

        std::cout << "Dispensing " << num << " 20$ note\n";

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
