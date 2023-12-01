#ifndef _SOCKET_ADAPTER_H_
#define _SOCKET_ADAPTER_H_

#include "Volt.h"

namespace patterns
{

class SocketAdapter
{
public:
    virtual ~SocketAdapter() = default;

    virtual Volt* get120Volt() = 0;
    virtual Volt* get12Volt() = 0;
    virtual Volt* get3Volt() = 0;
};
  
} // namespace patterns
#endif  //_SOCKET_ADAPTER_H_