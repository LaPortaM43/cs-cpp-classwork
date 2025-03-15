#pragma once 
#include <string>
#include "Employee.h"
using namespace std; 

class Manager:public Employee { 

    private:
        int numOfSupervisees; 
        int supervisoryCapacity;
        Employee* supervisees; 

    public: 
        Manager(string eName, int eID, double eSalary, int newSupervisoryCapacity);
        ~Manager();
        int getNumberOfSupervisees();
        Employee* getSuperVisees();
        void assignSupervisee(Employee emp);
        void removeSupervisee(Employee emp); 
        string toString();
};


