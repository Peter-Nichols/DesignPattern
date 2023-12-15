#pragma once

#include "ATMDispenseChain.h"

namespace patterns
{
class TestChainOfResponsibilityPattern
{
public:
    TestChainOfResponsibilityPattern() = delete;
    virtual ~TestChainOfResponsibilityPattern() = default;

    static void dispenseMoneyFromATM(int money);
};

} // namespace patterns

