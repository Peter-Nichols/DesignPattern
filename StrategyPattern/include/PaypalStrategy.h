#pragma once

#include "PaymentStrategy.h"

#include <iostream>

namespace patterns
{
class PaypalStrategy : public PaymentStrategy
{
private:
    std::string emailId;
    std::string password;
public:
    PaypalStrategy(const std::string& email, const std::string& pwd);
    virtual ~PaypalStrategy() = default;

    void pay(int amount) override;
};

} // namespace patterns
