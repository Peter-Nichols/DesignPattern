
#include "ShoppingCart.h"


namespace patterns
{
ShoppingCart::ShoppingCart()
{
    //items = new std::list<Item>();
}

void ShoppingCart::addItem(Item& item)
{
    items.push_back(item);
}

void ShoppingCart::removeItem(Item* item)
{
    items.remove(*item);
}

int ShoppingCart::calculateTotal()
{
    int sum = 0;

    for (Item& item : items)
    {
        sum += item.getPrice();
    }
    
    return sum;
}

void ShoppingCart::pay(PaymentStrategy* paymentMethod)
{
    int amount = calculateTotal();
    paymentMethod->pay(amount);
}
} // namespace patterns

