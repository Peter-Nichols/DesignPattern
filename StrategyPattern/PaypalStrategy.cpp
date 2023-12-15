
#include "PaypalStrategy.h"

#include <iostream>

namespace patterns
{

PaypalStrategy::PaypalStrategy(const std::string&email, const std::string& pwd)
{
}

void PaypalStrategy::pay(int amount)
{
    std::cout <<  amount << " paid using Paypal.\n";
}

} // namespace patterns

