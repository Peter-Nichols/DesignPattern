
#include "Pentagon.h"

#include "iostream"

namespace patterns
{
Pentagon::Pentagon(ColorInterface* color)
:AbstractShape(color)
{
}

void Pentagon::applyColor()
{
    std::cout << "Pentagon fill with color ";
    color->ApplyColor();
}
} // namespace patterns

