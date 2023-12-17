#pragma once

namespace patterns
{

class Book;
class Fruit;

class ShoppingCartVisitorInterface
{
public:
    virtual ~ShoppingCartVisitorInterface() = default;

    virtual int visit(Book* book) = 0;
    virtual int visit(Fruit* fruit) = 0;
};

} // namespace patterns
