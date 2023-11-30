/*
 * PersonalComputer.cpp
 *
 *  Created on: Nov 8, 2023
 *      Author: pierrebeldor
 */

#include "PersonalComputer.h"

#include <iostream>

namespace patterns {

PersonalComputer::PersonalComputer() {
	// TODO Auto-generated constructor stub

}

PersonalComputer::PersonalComputer(std::string& ram, std::string& hdd, std::string& cpu)
{
	RAM = ram;
	HDD = hdd;
	CPU = cpu;
}

PersonalComputer::~PersonalComputer() {
	// TODO Auto-generated destructor stub
}

PersonalComputer::PersonalComputer(const PersonalComputer &other) {
	// TODO Auto-generated constructor stub

}

PersonalComputer::PersonalComputer(PersonalComputer &&other) {
	// TODO Auto-generated constructor stub

}

PersonalComputer& PersonalComputer::operator=(const PersonalComputer &other)
{

	return *this;
}

PersonalComputer& PersonalComputer::operator=(PersonalComputer &&other)
{

	return *this;
}

void PersonalComputer::print() const
{
	std::cout << "Personal computer class\n\t Ram: " << RAM << "  HDD: " << HDD << "  CPU: "  << CPU << "\n";
}

} /* namespace patterns */
