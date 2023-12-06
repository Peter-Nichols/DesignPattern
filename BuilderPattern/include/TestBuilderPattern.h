#pragma once


#include "Computer.h"

namespace patterns
{
class TestBuilderPattern
{
private:
	/* data */
public:
	virtual ~TestBuilderPattern() = default;
	static void BuildAndPrintComputer();
};

} /* namespace patterns */
