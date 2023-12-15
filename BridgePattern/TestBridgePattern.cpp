#include "TestBridgePattern.h"

#include "RedColor.h"
#include "GreenColor.h"
#include "Pentagon.h"
#include "Rectangle.h"
#include "AbstractShape.h"

namespace patterns
{
void TestBridgePattern::CreateAndPrintBridgePattern()
{
    AbstractShape* rect = new Rectangle(new RedColor());
    rect->applyColor();

    AbstractShape* pent = new Pentagon(new GreenColor());
    pent->applyColor();
}
} // namespace patterns


