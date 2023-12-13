
#include "Currency.h"

namespace patterns
{
Currency::Currency(int amt)
{
    amount = amt;
}

int Currency::getAmount()
{
    return amount;
}
} // namespace patterns
