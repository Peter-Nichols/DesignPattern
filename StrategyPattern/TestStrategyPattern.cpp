
#include "TestStrategyPattern.h"

#include "ShoppingCart.h"
#include "Item.h"
#include "PaypalStrategy.h"
#include "CreditCardStrategy.h"

namespace patterns
{
void TestStrategyPattern::AddItemAndPay()
{
    ShoppingCart cart;

    Item* item1 = new Item("1234", 10);
    Item* item2 = new Item("5678", 40);
    Item* item3 = new Item("1357", 25);

    cart.addItem(*item1);
    cart.addItem(*item2);
    cart.addItem(*item3);

    //pay by Paypal
    cart.pay(new PaypalStrategy("myemail@example.com", "mypwd"));

    //pay with credit card

    cart.pay(new CreditCardStrategy("Johm Doe", "1234567890123456", "123", "01/03/2023"));
}

} // namespace patterns

