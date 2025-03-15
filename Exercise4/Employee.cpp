#include "Employee.h"

Employee::Employee()
{
	name = "";
	id = 0;
	salary = 0;
}
Employee::Employee(string eName, int eID, double eSalary) 
{
	name = eName;
	id = eID;
	salary = eSalary;
}
string Employee::getName()
{
	return name;
}
void Employee::setName(string eName)
{
	name = eName;
}
int Employee::getID()
{
	return id;
}
double Employee::getSalary()
{
	return salary;
}
//implement toString()

string Employee::toString() {
	return "Name: " + name + "\n";
	return "ID: " + to_string(id) + "\n";
	return "Salary: " + to_string(salary) + "\n";''
}