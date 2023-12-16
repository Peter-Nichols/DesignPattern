#include "TestVisitorPattern.h"

#include "Book.h"
#include "Fruit.h"

namespace patterns
{
void TestVisitorPattern::BuildAndPrintVisitorPattern()
{
    ShoppingCartClient*  client = new ShoppingCartClient();

    ItemElementInterface* b1 = new Book(20, "1234");
    client->addItems(b1);

    ItemElementInterface* b2 = new Book(100, "6789");
    client->addItems(b2);

    ItemElementInterface* f1 = new Fruit(10, 2, "Banana");
    client->addItems(f1);

    ItemElementInterface* f2 = new Fruit(5, 5, "Apple");
    client->addItems(f2);

    int total = client->calculatePrice();

    std::cout << "The total price is: $" << total << ".\n"; 

}
} // namespace patterns
