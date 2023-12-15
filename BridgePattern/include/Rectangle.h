
#pragma once

#include "ColorInterface.h"
#include "AbstractShape.h"


namespace patterns
{
class Rectangle : public AbstractShape
{
private:
    /* data */
public:
    explicit Rectangle(ColorInterface* color);
    virtual ~Rectangle() = default;

    void applyColor() override;
};

} // namespace patterns
