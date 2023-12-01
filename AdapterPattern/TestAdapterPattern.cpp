#include "TestAdapterPattern.h"

#include <iostream>

#include "SocketClassAdapterImpl.h"
#include "SocketObjectAdapterImpl.h"

namespace patterns
{
void TestAdapterPattern::testClassAdapter()
{
    SocketAdapter* socketAdapter = new SocketClassAdapterImpl();
    Volt* v3 = getVolt(socketAdapter, 3);
    Volt* v12 = getVolt(socketAdapter, 12);
    Volt* v120 = getVolt(socketAdapter, 120);

    std::cout << "V3 volts using the Class Adapter = " << v3->getVolts() << "\n";
    std::cout << "V12 volts using the Class Adapter = " << v12->getVolts() << "\n";
    std::cout << "V120 volts using the Class Adapter = " << v120->getVolts() << "\n\n";
}


void TestAdapterPattern::testObjectAdapter()
{
    SocketAdapter* socketAdapter = new SocketObjectAdapterImpl();
    Volt* v3 = getVolt(socketAdapter, 3);
    Volt* v12 = getVolt(socketAdapter, 12);
    Volt* v120 = getVolt(socketAdapter, 120);

    std::cout << "V3 volts using the Object Adapter = " << v3->getVolts() << "\n";
    std::cout << "V12 volts using the Object Adapter = " << v12->getVolts() << "\n";
    std::cout << "V120 volts using the Object Adapter = " << v120->getVolts() << "\n\n";
}


Volt* TestAdapterPattern::getVolt(SocketAdapter*sockAdapter, int i)
{
    switch (i)
    {
        case 3:
            return sockAdapter->get3Volt();
        case 12:
            return sockAdapter->get12Volt();
        case 120:
            return sockAdapter->get120Volt();
        default:
            return sockAdapter->get120Volt();
    }
}

} // namespace patterns
