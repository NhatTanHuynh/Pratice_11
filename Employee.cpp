#include "Employee.h"

int Employee::next_id = 0;

Employee::Employee()
: Person("EmptyName", "EmptyEmail"), salary(-1)
{
    id  = next_id++;
}

Employee::Employee(string name, string email, double paraSalary)
: Person(name, email), salary(paraSalary)
{
    id = next_id++;
}

int Employee::getId()
{
    return id;
}

double Employee::getSalary()
{
    return salary;
}