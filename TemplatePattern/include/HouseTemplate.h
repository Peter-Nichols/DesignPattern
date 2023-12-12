#pragma once

namespace patterns
{
class HouseTemplate
{
private:
    void buildFoundation();
    void buildWindows();

public:
    virtual ~HouseTemplate() = default;

    virtual void buildHouse() final;
    virtual void buildPillars() = 0;
    virtual void buildWalls() = 0;

};


} // namespace patterns
