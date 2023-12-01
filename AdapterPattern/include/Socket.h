#ifndef _SOCKET_H_
#define _SOCKET_H_

#include "Volt.h"

namespace patterns
{
class Socket
{
public:
    virtual ~Socket() = default;

    Volt* getVolt();
};
   
} // namespace patterns

#endif