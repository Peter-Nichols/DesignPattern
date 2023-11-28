/*
 * ComputerFactory.cpp
 *
 *  Created on: Nov 8, 2023
 *  Author: pierrebeldor
 */

#include "ComputerFactory.h"

namespace patterns {

ComputerFactory::ComputerFactory() {
	// TODO Auto-generated constructor stub

}

ComputerFactory::~ComputerFactory()
{
	// TODO Auto-generated destructor stub
}

ComputerFactory::ComputerFactory(const ComputerFactory &other)
{
	// TODO Auto-generated constructor stub

}

ComputerFactory::ComputerFactory(ComputerFactory &&other)
{
	// TODO Auto-generated constructor stub

}

ComputerFactory& ComputerFactory::operator=(const ComputerFactory &other)
{

	return *this;
}

ComputerFactory& ComputerFactory::operator=(ComputerFactory &&other)
{

	return *this;
}

ComputerInterface* ComputerFactory::getComputer(ComputerType type, std::string ram, std::string sdd, std::string cpu)
{
	switch (type)
	{
		case ComputerType::PC:
			return new PersonalComputer(ram, sdd, cpu);
			break;
		case ComputerType::SERVER:
			return new ServerComputer(ram, sdd, cpu);
			break;
		default:
			return nullptr;
	}
}


} /* namespace patterns */
