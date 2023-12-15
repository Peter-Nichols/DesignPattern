#pragma once

#include <list>

#include "Item.h"
#include "PaymentStrategy.h"

namespace patterns
{
class ShoppingCart
{
private:
    std::list<Item> items;
public:
    ShoppingCart();
    virtual ~ShoppingCart() = default;

    void addItem(Item& item);
    void removeItem(Item* item);
    int calculateTotal();
    void pay(PaymentStrategy* paymentMethod);
};

} // namespace patterns
