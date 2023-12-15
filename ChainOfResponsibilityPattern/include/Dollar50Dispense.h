#pragma once

#include "DispenseChainInterface.h"
#include "Currency.h"


namespace patterns
{
class Dollar50Dispense : public DispenseChainInterface
{
private:
    DispenseChainInterface* chain;
public:
    virtual ~Dollar50Dispense() = default;

    void setNextChain(DispenseChainInterface* nextChain) override;
    void dispense(Currency* cur) override;
};


} // namespace patterns

