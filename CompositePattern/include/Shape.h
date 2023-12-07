#pragma once

#include <string>

enum class Color
{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    MAGENTA,
    CYAN,
    NUM_OF_COLORS,
};

namespace patterns
{
class Shape
{
public:
    virtual ~Shape() = default;

    virtual void draw(std::string fillColor) = 0;
    //virtual void draw(int x, int y, int width, int height, Color color) = 0;
};

} // namespace patterns
