#pragma once

#include "ColorInterface.h"

namespace patterns
{
class AbstractShape
{
protected:
    ColorInterface* color;
    /* data */
public:
    AbstractShape(ColorInterface* color);
    virtual ~AbstractShape() = default;

    virtual void applyColor() = 0;
};

} // namespace patterns

