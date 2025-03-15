// Course.cpp

#include "Course.h" 
#include <iostream> 
using namespace std; 

Course::Course(string courseName, int capacity) { 
    students = new string[capacity];  
    numberOfStudents = 0; 
    this->courseName = courseName;
    this->capacity = capacity;  
}

Course::~Course() { 
    delete[] students; 
}

string Course::getCourseName() { 
    return courseName;
}

void Course::addStudent(string stuName) { 
 
    if (this->numberOfStudents < this->capacity) { 
        students[numberOfStudents] = stuName; 
        numberOfStudents = numberOfStudents + 1; 
    } else { 
        cout << "The class is full." << endl;
    }
}
void Course::dropStudent(string stuName) { 
    bool found = false;
    for (int i = 0; i < numberOfStudents; i++) { 
        if (students[i] == stuName) {
            found = true; 
            students[i] = students[numberOfStudents-1];
            numberOfStudents = numberOfStudents -1;
            break;
        }
    }
}

string* Course::getStudents() { 
    return students; 
}

int Course::getNumberOfStudents() { 
    return numberOfStudents; 
}

