#pragma once

#include <iostream>

#include "ItemElementInterface.h"


namespace patterns
{
class Fruit : public ItemElementInterface
{
private:
    int pricePerKg;
    int weight;
    std::string name;

public:
    Fruit(int priceKg, int wt, const std::string& nm);
    virtual ~Fruit() = default;

    int getPricePerKg();
    int getWeight();
    const std::string& getName();

    int accept(ShoppingCartVisitorInterface* visitor) override;
};

} // namespace patterns
