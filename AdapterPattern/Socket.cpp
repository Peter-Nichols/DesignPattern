#include "Socket.h"

namespace patterns
{
Volt* Socket::getVolt()
{
    return new Volt(120);
}

} // namespace patterns
