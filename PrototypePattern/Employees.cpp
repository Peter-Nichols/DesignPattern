/*
 * Employees.cpp
 *
 *  Created on: Nov 7, 2023
 *      Author: pierrebeldor
 */

#include "Employees.h"
#include <iostream>

namespace patterns {

Employees::Employees() {
	// TODO Auto-generated constructor stub

}


Employees::Employees(std::list<std::string> empList, std::vector<std::string> empVector)
{
	this->empList = empList;
	this->empVector = empVector;
}

Employees::~Employees() {
	// TODO Auto-generated destructor stub
}

//Move assignment
Employees& Employees::operator=(Employees &&other) {
	// TODO Auto-generated method stub
	//&empList = other.empList;
	//&empVector = other.empVector;

	return *this;
}

//Copy constructor
Employees& Employees::operator=(const Employees &other)
{
	empList = other.empList;
	empVector = other.empVector;

	return *this;
}

//Move constructor
Employees::Employees(Employees &&other)
{
}

Employees::Employees(const Employees &other) :
		empList(other.empList),
		empVector(other.empVector)
{
}

void Employees::loadData()
{
	empList.push_front("Mohamed Ali");
	empList.push_back("Geaorge Forman");
	empList.push_back("Sugar Ray Leonard");
	empList.push_back("Myke Tyson");
	empList.push_back("Lenox Lewis");
}

std::list<std::string> Employees::getEmpList() const
{
	return empList;
}

std::vector<std::string> Employees::getEmpVector() const
{
	return empVector;
}


void Employees::addNew(const std::string& newEmp)
{
	empList.push_back(newEmp);
}

void Employees::printEmployees()
{
	std::cout << "======== Employees list ============\n";

	for (const std::string& val : empList)
	{
		std::cout << val << "\n";
	}
}
} /* namespace employees */
