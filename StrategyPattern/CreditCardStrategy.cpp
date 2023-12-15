
#include "CreditCardStrategy.h"

namespace patterns
{
CreditCardStrategy::CreditCardStrategy(const std::string& nm, const std::string& ccNum, const std::string& cvv, const std::string& expiryDate)
:name(nm),
cardNumber(ccNum),
cvv(cvv),
dateOfExpiry(expiryDate)
{
}

void CreditCardStrategy::pay(int amount)
{
    std::cout << amount << " paid with credit card\n";
}
} // namespace patterns

