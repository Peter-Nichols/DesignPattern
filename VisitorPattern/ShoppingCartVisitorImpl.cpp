#include "ShoppingCartVisitorImpl.h"

#include <iostream>

#include "Book.h"
#include "Fruit.h"

namespace patterns
{
int ShoppingCartVisitorImpl::visit(Book* book)
{
    int cost = book->getPrice();

    // Apply $5 discount if book is greater than 50
    if (book->getPrice() > 50)
    {
        cost = cost - 5;
    }
    
    std::cout << "Book ISBN::" << book->getIsbnNumber() << " cost = " << cost <<"\n";

    return cost;
}

int ShoppingCartVisitorImpl::visit(Fruit* fruit)
{
    int cost = fruit->getPricePerKg() * fruit->getWeight();

    std::cout << fruit->getName() << " cost = " << cost <<"\n";

    return cost;
}
} // namespace patterns
