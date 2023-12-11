

#include "Drawing.h"

#include <iostream>

namespace patterns
{
Drawing::Drawing()
{

}

void Drawing::draw(std::string fillColor)
{
    for (Shape* sh : listOfShapes)
    {
        sh->draw(fillColor);   
    }
}

void Drawing::addShape(Shape* shape)
{
    listOfShapes.push_back(shape);
}

void Drawing::removeShape(Shape* shape)
{
    listOfShapes.remove(shape);
}

void Drawing::clear()
{
    std::cout << "Clearing all the shapes from the drawing\n";
    listOfShapes.clear();
}

} // namespace patterns
