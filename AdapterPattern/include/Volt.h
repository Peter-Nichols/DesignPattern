#pragma once

namespace patterns
{
class Volt
{
private:
    int values;
public:
    Volt(int val);
    virtual ~Volt() = default;

    int getVolts();
    void setVolts(const int volts);

};
    
} // namespace patterns
