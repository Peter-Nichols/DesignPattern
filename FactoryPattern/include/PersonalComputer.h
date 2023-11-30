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

	std::string& getRAM() override
	{
		return this->RAM;
	}

	void setRAM(const std::string& ram) override
	{
		RAM = ram;
	}

	std::string& getHDD() override
	{
		return this->HDD;
	}

	void setHDD(const std::string& hdd) override
	{
		this->HDD = hdd;
	}

	std::string& getCPU() override
	{
		return this->CPU;
	}


	void setCPU(const std::string& cpu) override
	{
		this->CPU  = cpu;
	}

private:
	std::string RAM;
	std::string HDD;
	std::string CPU;
};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_FACTORYPATTERN_PERSONALCOMPUTER_H_ */
