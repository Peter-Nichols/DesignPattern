
#include "Rectangle.h"

#include <iostream>

#include "AbstractShape.h"

namespace patterns
{
Rectangle::Rectangle(ColorInterface* color)
: AbstractShape(color)
{

}

void Rectangle::applyColor()
{
    std::cout << "Rectangle fill with color ";
    color->ApplyColor();
}

} // namespace patterns
