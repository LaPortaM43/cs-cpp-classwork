
#include "Manager.h"

Manager::Manager(string eName, int eID, double eSalary, int newSupervisoryCapacity):Employee(eName, eID, eSalary) {
    this->numOfSupervisees = 0;
    this->supervisees = new Employee[newSupervisoryCapacity];
    this->supervisoryCapacity = newSupervisoryCapacity;
}
Manager::~Manager() {
    delete[] supervisees; 
}
int Manager::getNumberOfSupervisees() {
    return numOfSupervisees;
}
Employee* Manager::getSuperVisees() {
    return supervisees;
}
void Manager::assignSupervisee(Employee emp) {
    if (this->numOfSupervisees < this->supervisoryCapacity) { 
        supervisees[numOfSupervisees] = emp; 
        numOfSupervisees++;
    } else { 
        cout << "There is no room." << endl;
    }
}

void Manager::removeSupervisee(Employee emp) {

    bool found = false; 
    for (int i = 0; i < numOfSupervisees; i++) { 
        if (supervisees[i].getName() == emp.getName()) {
            found = true; 
            supervisees[i] = supervisees[numOfSupervisees - 1];
            numOfSupervisees = numOfSupervisees - 1;
            break;
        }
    }
}
string Manager::toString() {
    return Employee.toString();
    return "Current # of supervisees: " + numOfSupervisees;
    return "List of supervisee names: "; 
    for(int i = 0; i < numOfSupervisees; i++) { 
        return supervisees[i].getName() + "\n";
    }
}