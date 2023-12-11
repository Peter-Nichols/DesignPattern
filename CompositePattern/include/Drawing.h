#pragma once

#include <vector>
#include <list>

#include "Shape.h"

namespace patterns
{
class Drawing : public Shape
{
private:
    std::vector<Shape> shapes;
    std::list<Shape*> listOfShapes;

public:
    Drawing();
    virtual ~Drawing() = default;

    void draw(std::string fillColor) override;

    void addShape(Shape* shape);
    void removeShape(Shape* shape);
    void clear();
};

} // namespace patterns

