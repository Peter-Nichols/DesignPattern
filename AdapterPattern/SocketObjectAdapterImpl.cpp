#include "SocketObjectAdapterImpl.h"

#include <memory>

namespace patterns
{

Volt* SocketObjectAdapterImpl::convertVolt(Volt* volt, int deno)
{
    return new Volt(volt->getVolts()/deno);
}

SocketObjectAdapterImpl::SocketObjectAdapterImpl()
{
    sock = new Socket();
}

SocketObjectAdapterImpl::~SocketObjectAdapterImpl()
{
    if (sock != nullptr)
    {
        delete(sock);
        sock = nullptr;
    }    
}

Volt* SocketObjectAdapterImpl::get120Volt()
{
    return sock->getVolt();
}

Volt* SocketObjectAdapterImpl::get12Volt()
{
    return convertVolt(sock->getVolt(), 10);
}

Volt* SocketObjectAdapterImpl::get3Volt()
{
    return convertVolt(sock->getVolt(), 40);
}

} // namespace patterns
