
#include "HouseTemplate.h"

#include <iostream>

namespace patterns
{
void HouseTemplate::buildHouse()
{
    buildFoundation();
    buildPillars();
    buildWalls();
    buildWindows();

    std::cout << "House is build.\n";
}

void HouseTemplate::buildWindows()
{
    std::cout << "Build Glass Windows\n";
}

void HouseTemplate::buildFoundation()
{
    std::cout << "Building foundation with cement, iron rods and sand\n";
}

} // namespace patterns

