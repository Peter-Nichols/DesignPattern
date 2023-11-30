/*
 * ServerComputer.h
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#ifndef DESIGNPATTERNS_FACTORYPATTERN_SERVERCOMPUTER_H_
#define DESIGNPATTERNS_FACTORYPATTERN_SERVERCOMPUTER_H_

#include "ComputerInterface.h"

namespace patterns {

/*
 *
 */
class ServerComputer : public ComputerInterface {
public:
	ServerComputer();
	ServerComputer(std::string& ram, std::string& hdd, std::string& cpu);
	virtual ~ServerComputer();
	ServerComputer(const ServerComputer &other);
	ServerComputer(ServerComputer &&other);
	ServerComputer& operator=(const ServerComputer &other);
	ServerComputer& operator=(ServerComputer &&other);

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

#endif /* DESIGNPATTERNS_FACTORYPATTERN_SERVERCOMPUTER_H_ */
