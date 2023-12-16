

#include "ShoppingCartClient.h"

#include "ShoppingCartVisitorImpl.h"

namespace patterns
{

ShoppingCartClient::ShoppingCartClient()
{
    //items = new std::list<ItemElementInterface>();
}

ShoppingCartClient::~ShoppingCartClient()
{

}


int ShoppingCartClient::calculatePrice()
{
    ShoppingCartVisitorInterface* visitor = new ShoppingCartVisitorImpl();

    int sum = 0;

    for (ItemElementInterface* item : items)
    {
        sum = sum + item->accept(visitor);
    }

    return sum;
}

void ShoppingCartClient::addItems(ItemElementInterface* element)
{
    items.push_back(element);
}

} // namespace patterns
