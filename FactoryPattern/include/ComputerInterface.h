/*************************************************************************
 * ComputerInterface.h
 *
 *  Created on: Nov 8, 2023
 *      Author: Peter Nichols
 *************************************************************************/

#ifndef DESIGNPATTERNS_FACTORYPATTERN_INCLUDE_COMPUTERINTERFACE_H_
#define DESIGNPATTERNS_FACTORYPATTERN_INCLUDE_COMPUTERINTERFACE_H_

#include <string>

namespace patterns
{
enum class ComputerType
{
	PC,
	SERVER,
	NUM_COMP_TYPE,
};
 
class ComputerInterface
{
public:
	virtual std::string& getRAM() = 0;
	virtual void setRAM(const std::string& ram) = 0;
	virtual std::string& getHDD() = 0;
	virtual void setHDD(const std::string& hdd) = 0;
	virtual std::string& getCPU() = 0;
	virtual void setCPU(const std::string& cpu) = 0;

	virtual void print() const = 0;
};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_FACTORYPATTERN_INCLUDE_COMPUTERINTERFACE_H_ */
