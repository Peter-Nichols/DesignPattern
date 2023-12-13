
#include "TestChainOfResponsibilityPattern.h"

#include <iostream>

#include "ATMDispenseChain.h"


namespace patterns
{
void TestChainOfResponsibilityPattern::dispenseMoneyFromATM(int value)
{
    ATMDispenseChain* atmDispenser = new ATMDispenseChain();

    if ((value % 10) != 0)
    {
        std::cout << "Amount should be in multiple of 10s.\n";
    }
    else
    {
        std::cout << "Dispensing money for " << value << "$.\n";
        // Process the request
        atmDispenser->getChainOfResponsibility()->dispense(new Currency(value));
    }
    
    
}
} // namespace patterns
