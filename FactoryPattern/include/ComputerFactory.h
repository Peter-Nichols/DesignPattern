/*
 * ComputerFactory.h
 *
 *  Created on: Nov 8, 2023
 *  Author: pierrebeldor
 */

#ifndef DESIGNPATTERNS_FACTORYPATTERN_COMPUTERFACTORY_H_
#define DESIGNPATTERNS_FACTORYPATTERN_COMPUTERFACTORY_H_

#include "ComputerInterface.h"
#include "PersonalComputer.h"
#include "ServerComputer.h"


namespace patterns {

/*
 *
 */
class ComputerFactory {
public:
	ComputerFactory();
	virtual ~ComputerFactory();
	ComputerFactory(const ComputerFactory &other);
	ComputerFactory(ComputerFactory &&other);
	ComputerFactory& operator=(const ComputerFactory &other);
	ComputerFactory& operator=(ComputerFactory &&other);

	static ComputerInterface* getComputer(ComputerType type, std::string ram, std::string hdd, std::string cpu);
};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_FACTORYPATTERN_COMPUTERFACTORY_H_ */
