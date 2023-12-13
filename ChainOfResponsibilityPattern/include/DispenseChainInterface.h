#pragma once

#include "Currency.h"

namespace patterns
{

class DispenseChainInterface
{
private:
    /* data */
public:
    //DispenseChainInterface() = delete;

    virtual ~DispenseChainInterface() = default;

    virtual void setNextChain(DispenseChainInterface* nextChain) = 0;
    virtual void dispense(Currency* cur) = 0;
};

} // namespace patterns
