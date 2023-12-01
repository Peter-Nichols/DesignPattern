#include "SocketClassAdapterImpl.h"

#include <memory>

namespace patterns
{


Volt* SocketClassAdapterImpl::convertVolt(Volt* volt, int deno)
{
    return new Volt(volt->getVolts()/deno);
}

Volt* SocketClassAdapterImpl::get120Volt()
{
    return getVolt();
}

Volt* SocketClassAdapterImpl::get12Volt()
{
    return convertVolt(getVolt(), 10);
}

Volt* SocketClassAdapterImpl::get3Volt()
{
    return convertVolt(getVolt(), 40);
}

} // namespace patterns
