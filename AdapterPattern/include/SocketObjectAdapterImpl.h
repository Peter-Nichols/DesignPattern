#pragma once

#include "Socket.h"
#include "SocketAdapter.h"

namespace patterns
{
class SocketObjectAdapterImpl : public SocketAdapter
{
private:
    Socket* sock;

    Volt* convertVolt(Volt* volt, int deno);
public:
    SocketObjectAdapterImpl();
    virtual ~SocketObjectAdapterImpl();

    Volt* get120Volt() override;
    Volt* get12Volt() override;
    Volt* get3Volt() override;
};
    
} // namespace patterns
