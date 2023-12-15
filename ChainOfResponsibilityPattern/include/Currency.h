#pragma once

namespace patterns
{
class Currency
{
private:
    int amount;
public:
    Currency(int amt);
    virtual ~Currency() = default;

    int getAmount();
};


} // namespace patterns
