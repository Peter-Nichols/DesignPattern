
#include "Book.h"

namespace patterns
{
Book::Book(int cost, const std::string& isbn)
: price(cost), isbnNumber(isbn)
{
}

int Book::getPrice()
{
    return price;
}

const std::string& Book::getIsbnNumber()
{
    return isbnNumber;
}

int Book::accept(ShoppingCartVisitorInterface* visitor)
{
    return visitor->visit(this);
}
} // namespace patterns
