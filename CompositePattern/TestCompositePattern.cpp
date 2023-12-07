#include "TestCompositePattern.h"

#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Drawing.h"

namespace patterns
{

void TestCompositePattern::testShapeDrawing()
{
    Shape* tri = new Triangle();
    Shape* tri1 = new Triangle();
    Shape* cir = new Circle();

    Drawing* drawing = new Drawing();
    drawing->addShape(tri);
    drawing->addShape(tri1);
    drawing->addShape(cir);

    drawing->draw("Red");

    drawing->clear();
}

} // namespace patterns