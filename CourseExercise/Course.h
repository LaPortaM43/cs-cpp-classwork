// Course.h

#pragma once 
#include <string>
using namespace std;

class Course { 
    private: 
        string courseName; 
        string* students; 
        int numberOfStudents; 
        int capacity;  
    
    public: 
        Course(string courseName, int capacity); 
        ~Course(); 
        string getCourseName(); 
        void addStudent(string stuName); 
        void dropStudent(string stuName); 
        string* getStudents(); 
        int getNumberOfStudents(); 
};