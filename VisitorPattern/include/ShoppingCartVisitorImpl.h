#pragma once

#include "ShoppingCartVisitorInterface.h"

namespace patterns
{
class ShoppingCartVisitorImpl : public ShoppingCartVisitorInterface
{
public:
    virtual ~ShoppingCartVisitorImpl() = default;

    int visit(Book* book) override;
    int visit(Fruit* fruit) override;
};

} // namespace patterns
