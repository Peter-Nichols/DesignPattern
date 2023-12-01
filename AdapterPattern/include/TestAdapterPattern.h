#pragma once

#include "Volt.h"
#include "SocketAdapter.h"

namespace patterns
{
class TestAdapterPattern
{
public:
    TestAdapterPattern() = delete;

    static void testClassAdapter();
    static void testObjectAdapter();

private:
    static Volt* getVolt(SocketAdapter*sockAdapter, int i);

};

} // namespace patterns
