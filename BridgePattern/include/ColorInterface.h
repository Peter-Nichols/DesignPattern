#pragma once

class ColorInterface
{

public:
    virtual ~ColorInterface() = default;
    
    virtual void ApplyColor() = 0;
};
