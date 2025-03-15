#pragma once

#include <string>
using namespace std;

class Employee
{
private:
	string name;
	int id;
	double salary;
public:
	Employee();
	Employee(string eName, int eID, double eSalary);
	string getName();
	void setName(string eName);
	int getID();
	double getSalary();
	//define toString function
	virtual string toString();
	
};
