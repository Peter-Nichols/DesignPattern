#pragma once

namespace patterns
{
class TestTemplatePattern
{
private:
    
public:
    TestTemplatePattern() = delete;
    virtual ~TestTemplatePattern() = default;

    static void BuildAndPrintTemplatePattern();
};

} // namespace patterns

