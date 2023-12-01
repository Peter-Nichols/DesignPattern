/*
 * PersonalComputer.h
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#ifndef DESIGNPATTERNS_FACTORYPATTERN_PERSONALCOMPUTER_H_
#define DESIGNPATTERNS_FACTORYPATTERN_PERSONALCOMPUTER_H_

#include "ComputerInterface.h"

namespace patterns {

/*
 *
 */
class PersonalComputer : public ComputerInterface {
public:
	PersonalComputer();
	PersonalComputer(std::string& ram, std::string& sdd, std::string& cpu);
	virtual ~PersonalComputer();
	PersonalComputer(const PersonalComputer &other);
	PersonalComputer(PersonalComputer &&other);
	PersonalComputer& operator=(const PersonalComputer &other);
	PersonalComputer& operator=(PersonalComputer &&other);
	void print() const override;

	std::string& getRAM() override;
	void setRAM(const std::string& ram) override;
	std::string& getHDD() override;
	void setHDD(const std::string& hdd) override;
	std::string& getCPU() override;
	void setCPU(const std::string& cpu) override;

private:
	std::string RAM;
	std::string HDD;
	std::string CPU;
};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_FACTORYPATTERN_PERSONALCOMPUTER_H_ */
