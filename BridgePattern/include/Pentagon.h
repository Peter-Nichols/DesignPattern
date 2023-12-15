#pragma once

#include "ColorInterface.h"
#include "AbstractShape.h"


namespace patterns
{

class Pentagon : public AbstractShape
{
private:
    
public:
    explicit Pentagon(ColorInterface* color);
    virtual ~Pentagon() = default;

    void applyColor() override;
};

} // namespace patterns
