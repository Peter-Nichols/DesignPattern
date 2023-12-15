
#include "ColorInterface.h"

namespace patterns
{
class GreenColor : public ColorInterface
{
private:
    /* data */
public:
    virtual ~GreenColor() = default;

    void ApplyColor() override;
};

} // namespace patterns
