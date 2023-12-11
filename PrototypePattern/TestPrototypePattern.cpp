#include "TestPrototypePattern.h"

#include "Employees.h"

namespace patterns
{

void TestPrototypePattern::CreateAndPrintEmployeesList()
{
    Employees* emps = new Employees();
    emps->loadData();

    Employees* emps1 = new Employees(*emps);

    emps1->addNew("Floyd Mayweather");
    emps1->addNew("Many Pacquiao");
    emps1->addNew("Joe Louis");

    emps->printEmployees();
    emps1->printEmployees();
}

} // namespace patterns
