#pragma once

#include "ColorInterface.h"


namespace patterns
{
class RedColor : public ColorInterface
{
private:
    /* data */
public:
    virtual ~RedColor() = default;

    void ApplyColor() override;
};


} // namespace patterns
