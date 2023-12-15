#pragma once

#include "HouseTemplate.h"


namespace patterns
{
class WoodenHouse : public HouseTemplate
{
private:
    /* data */
public:
    virtual ~WoodenHouse() = default;

    void buildWalls() override;
    void buildPillars() override;
};


} // namespace patterns
