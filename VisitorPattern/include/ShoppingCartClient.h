#pragma once

#include <list>

#include "ItemElementInterface.h"
#include "ShoppingCartVisitorImpl.h"

namespace patterns
{
class ShoppingCartClient
{
private:
    std::list<ItemElementInterface*> items;

public:
    ShoppingCartClient();
    virtual ~ShoppingCartClient();

    void addItems(ItemElementInterface* element);

    int calculatePrice();
};

} // namespace patterns
