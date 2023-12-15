#pragma once

#include <iostream>

namespace patterns
{
class Item
{
private:
    std::string upcCode;
    int price;

public:
    Item(const std::string& upc, int pr);
    virtual ~Item() = default;

    const std::string& getUpcCode();
    int getPrice();

    bool operator==(const Item& other);
};

} // namespace patterns
