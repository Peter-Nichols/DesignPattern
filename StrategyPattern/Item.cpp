
#include "Item.h"

namespace patterns
{

Item::Item(const std::string& upc, int pr)
: upcCode(upc),
price(pr)
{
}

const std::string& Item::getUpcCode()
{
    return upcCode;
}

int Item::getPrice()
{
    return price;
}

bool Item::operator==(const Item& other)
{
    return (this->price == other.price) && (this->upcCode.compare(other.upcCode) == 0);
}
} // namespace patterns

