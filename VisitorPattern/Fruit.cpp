
#include "Fruit.h"

namespace patterns
{

Fruit::Fruit(int priceKg, int wt, const std::string& nm)
: pricePerKg(priceKg), weight(wt), name(nm)
{

}

int Fruit::getPricePerKg()
{
    return pricePerKg;
}

int Fruit::getWeight()
{
    return weight;
}

const std::string& Fruit::getName()
{
    return name;
}

int Fruit::accept(ShoppingCartVisitorInterface* visitor)
{
    return visitor->visit(this);
}

} // namespace patterns

