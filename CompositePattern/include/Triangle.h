
#pragma once

#include "Shape.h"

namespace patterns
{
class Triangle : public Shape
{
public:
    virtual ~Triangle() = default;
    void draw(std::string fillColor) override;
};

} // namespace patterns

