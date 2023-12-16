#pragma once

#include <iostream>

#include "ItemElementInterface.h"

namespace patterns
{

class Book : public ItemElementInterface
{
private:
    int price;
    std::string isbnNumber;

public:
    Book(int cost, const std::string& isbn);
    virtual ~Book() = default;

    int getPrice();
    const std::string& getIsbnNumber();

    int accept(ShoppingCartVisitorInterface* visitor) override;
};
    
} // namespace patterns
