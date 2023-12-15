#pragma once

#include "HouseTemplate.h"


namespace patterns
{
class GlassHouse : public HouseTemplate
{
private:
    /* data */
public:
    virtual ~GlassHouse() = default;

    void buildWalls() override;
    void buildPillars() override;
};


} // namespace patterns
