#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;
#include "Person.h"

class Employee : public Person {
private:
int id;
double salary;
static int next_id;
public:
Employee();
Employee(string name, string email, double paraSalary);

int getId();
double getSalary();
};

#endif