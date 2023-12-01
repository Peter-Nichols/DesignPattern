
#pragma once

#include "Socket.h"
#include "SocketAdapter.h"

namespace patterns
{
class SocketClassAdapterImpl : public Socket, public SocketAdapter
{
private:
    Volt* convertVolt(Volt* volt, int deno);
public:
    virtual ~SocketClassAdapterImpl() = default;

    Volt* get120Volt() override;
    Volt* get12Volt() override;
    Volt* get3Volt() override;
};
    
} // namespace patterns
