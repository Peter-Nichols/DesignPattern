#pragma once


#include  "ShoppingCartClient.h"

namespace patterns
{
class TestVisitorPattern
{
public:
    virtual ~TestVisitorPattern() = default;
    
    static void BuildAndPrintVisitorPattern();
};


} // namespace patterns
