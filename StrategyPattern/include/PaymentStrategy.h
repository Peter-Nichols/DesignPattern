#pragma once


namespace patterns
{
class PaymentStrategy
{
private:
    
public:
    virtual ~PaymentStrategy() = default;

    virtual void pay(int amount) = 0;
};

} // namespace patterns
