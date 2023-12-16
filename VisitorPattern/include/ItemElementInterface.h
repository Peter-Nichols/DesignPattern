#pragma once

#include "ShoppingCartVisitorInterface.h"

namespace patterns
{

//class ShoppingCartVisitorInterface;

class ItemElementInterface
{
public:
    virtual ~ItemElementInterface() = default;

    virtual int accept(ShoppingCartVisitorInterface* visitor) = 0;
};

} // namespace patterns
