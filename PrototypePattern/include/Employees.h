/**********************************************************
 * Employees.h
 *
 *  Created on: Nov 7, 2023
 *  Author: pierrebeldor
 **********************************************************/

#ifndef DESIGNPATTERS_PROTOTYPEPATTERN_EMPLOYEES_H_
#define DESIGNPATTERS_PROTOTYPEPATTERN_EMPLOYEES_H_

#include <list>
#include <vector>
#include <string>

namespace patterns {

class Employees {
private:
	std::list<std::string> empList;
	std::vector<std::string> empVector;


public:
	Employees();
	Employees(std::list<std::string> empList, std::vector<std::string> empVector);
	virtual ~Employees();
	Employees& operator=(Employees &&other);
	Employees& operator=(const Employees &other);
	Employees(Employees &&other);
	Employees(const Employees &other);

	void addNew(const std::string& newEmp);

	void loadData();

	std::list<std::string> getEmpList() const;
	std::vector<std::string> getEmpVector() const;

	void printEmployees();
};


class Rectangle
{
public:
	Rectangle(int x, int y) : width(x), height(y)
	{

	}

	Rectangle() = default;

	Rectangle(const Rectangle& other) = delete;
	int area()
	{
		return width*height;
	}
private:
	int width;
	int height;
};

} /* namespace patterns */

#endif /* DESIGNPATTERS_PROTOTYPEPATTERN_EMPLOYEES_H_ */
