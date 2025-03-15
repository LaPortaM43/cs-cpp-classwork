// employeeExercise.cpp 
// Matthew LaPorta, s1359142 

#include <iostream>
#include <string> 
using namespace std; 

struct Employee { 
    string name; 
    int id; 
    int salary; 
};
void printEmployee(const Employee& emp) { 
    cout << "ID: " << emp.id << " , " << emp.name 
         << " , $" << emp.salary << endl;
}
void addEmployee(Employee& emp) {
    cin.ignore();
    cout << endl;
    cout << "Name: "; 
    getline(cin, emp.name); 
    cout << "ID: "; 
    cin >> emp.id; 
    cout << "Yearly Salary: "; 
    cin >> emp.salary; 
    cout << endl;
}
int searchEmployee(const Employee employees[], int employeeID, int num) { 
    for (int i = 0; i < num; i++) { 
        if (employees[i].id == employeeID) { 
            return i;  
        }
    }
    return -1; 
}
int main() { 
    int size; 
    cout << "How many employees? "; 
    cin >> size; 
    Employee *p = new Employee[size]; 
    
    cout << endl;
    for(int i = 0; i < size; i++) { 
        cout << "Employee " << i+1 << ": " << endl;
        addEmployee(p[i]); 
    }

    cout << "Employees are: " << endl;
    for(int i = 0; i < size; i++) { 
        printEmployee(p[i]); 
    }

    cout << endl;
    int searchForID;
    cout << "Please provide an employee ID to be searched: "; 
    cin >> searchForID; 

    int searchResult = searchEmployee(p, searchForID, size);
    if (searchResult != -1) { 
        cout << "Found Employee: " << p[searchResult].name << endl;
    } else { 
        cout << "Did not find an Employee!" << endl;
    }

    delete[] p; 
    p = NULL; 
    return 0;
}