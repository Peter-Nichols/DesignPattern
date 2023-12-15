#pragma once

#include <iostream>

#include "PaymentStrategy.h"

namespace patterns
{
class CreditCardStrategy : public PaymentStrategy
{
private:
    std::string name;
    std::string cardNumber;
    std::string cvv;
    std::string dateOfExpiry;

public:
    CreditCardStrategy(const std::string& nm, const std::string& ccNum, const std::string& cvv, const std::string& expiryDate);
    virtual ~CreditCardStrategy() = default;

    void pay(int amount) override;
};

} // namespace patterns
