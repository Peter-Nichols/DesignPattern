/*****************************************************************
 * Employees.cpp
 *
 * Created on: Nov 7, 2023
 * Author: Peter Nichols
 *****************************************************************/

#include "Employees.h"


#include <iostream>

namespace patterns {

Employees::Employees()
{
}

Employees::Employees(std::list<std::string> empList, std::vector<std::string> empVector)
{
	this->empList = empList;
	this->empVector = empVector;
}

Employees::~Employees()
{
}

//Move assignment
Employees& Employees::operator=(Employees &&other)
{
	if (this != &other)
	{
		empList.clear();
		empVector.clear();

		empList = other.empList;
		empVector = other.empVector;

		other.empList.clear();
		other.empVector.clear();
	}

	return *this;
}

//Copy assignment
Employees& Employees::operator=(const Employees &other)
{
	if (this != &other)
	{
	    empList = other.empList;
        empVector = other.empVector;
	}

	return *this;
}

//Move constructor
Employees::Employees(Employees &&other) noexcept :
empList(),
empVector()
{
	// empList = other.empList;
	// empVector = other.empVector;

	// other.empList.clear();
	// other.empVector.clear();

	*this = std::move(other);
}

//Copy constructor
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
} /* namespace patterns */
