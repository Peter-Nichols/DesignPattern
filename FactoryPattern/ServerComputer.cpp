/*
 * ServerComputer.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#include "ServerComputer.h"

#include <iostream>

namespace patterns {

ServerComputer::ServerComputer() {
	// TODO Auto-generated constructor stub

}

ServerComputer::ServerComputer(std::string& ram, std::string& hdd, std::string& cpu)
{
	RAM = ram;
	HDD = hdd;
	CPU = cpu;
}

ServerComputer::~ServerComputer() {
	// TODO Auto-generated destructor stub
}

ServerComputer::ServerComputer(const ServerComputer &other) {
	// TODO Auto-generated constructor stub

}

ServerComputer::ServerComputer(ServerComputer &&other)
{
	// TODO Auto-generated constructor stub

}

ServerComputer& ServerComputer::operator=(const ServerComputer &other)
{

	return *this;
}

ServerComputer& ServerComputer::operator=(ServerComputer &&other)
{

	return *this;
}

void ServerComputer::print() const
{
	std::cout << "Server computer class\n\t Ram: " << RAM << "  HDD: " << HDD << "  CPU: "  << CPU << "\n";
}

} /* namespace patterns */
