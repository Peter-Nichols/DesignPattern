#pragma once

#include "Shape.h"

namespace patterns
{
class Circle : public Shape
{
public:
    virtual ~Circle() = default;
    void draw(std::string fillColor) override;
};

} // namespace patterns
