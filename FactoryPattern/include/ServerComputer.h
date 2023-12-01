/*********************************************************************************
 * ServerComputer.h
 *
 * Created on: Nov 8, 2023
 * Author: Peter Nichols
 *********************************************************************************/

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


	std::string& getRAM() override;
	void setRAM(const std::string& ram) override;
	std::string& getHDD() override;
	void setHDD(const std::string& hdd) override;
	std::string& getCPU() override;
	void setCPU(const std::string& cpu) override;

	void print() const override;

private:
	std::string RAM;
	std::string HDD;
	std::string CPU;
};

} /* namespace patterns */

#endif /* DESIGNPATTERNS_FACTORYPATTERN_SERVERCOMPUTER_H_ */
