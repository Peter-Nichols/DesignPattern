/*******************************************************************************
 * 
********************************************************************************/

#include "Volt.h"


namespace patterns
{
Volt::Volt(int val)
{
    values = val;
}

int Volt::getVolts()
{
    return values;
}

void Volt::setVolts(const int volts)
{
    values = volts;
}

} // namespace patterns
