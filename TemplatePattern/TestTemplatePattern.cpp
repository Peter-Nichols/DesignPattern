#include "TestTemplatePattern.h"

#include "iostream"

#include "GlassHouse.h"
#include "WoodenHouse.h"

namespace patterns
{
void TestTemplatePattern::BuildAndPrintTemplatePattern()
{
    HouseTemplate* gHouseType = new GlassHouse();
    gHouseType->buildHouse();

    std::cout<< "*********   Build next house  ************************\n";

    HouseTemplate* wHouseType = new WoodenHouse();
    wHouseType->buildHouse();
}
} // namespace patterns

