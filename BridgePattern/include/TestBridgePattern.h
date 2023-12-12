#pragma once

namespace patterns
{
class TestBridgePattern
{
private:
    /* data */
public:
    TestBridgePattern() = delete;
    virtual ~TestBridgePattern() = default;

    static void CreateAndPrintBridgePattern();
};


} // namespace patterns
