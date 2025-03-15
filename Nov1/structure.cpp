// structure.cpp 
// Matthew LaPorta, s1359142 

#include <iostream> 
#include <string>
using namespace std; 

struct Person { 
    string name; 
    int age; 
}
struct Student { 
    int id; 
    short year; 
    // string name; 
    Person personInfo; 
    string major; 
    double gpa; 
}; 
Student addStudent() { 
    Student stu; 
    cout << "What is your ID?: "; 
    cin >> stu.id; 
    cout << "Which year are you in?: "; 
    cin >> stu.year; 
    cin.ignore(); 
    cout << "What is your name?: "; 
    getline(cin, stu.personInfo.name); 
    cout << "What is your major?: ";
    getline(cin, stu.major); 
    cout << "What is your gpa?: "; 
    cin >> stu.gpa; 
    cout << "What is your age?: "; 
    cin >> stu.personInfo.age;
    return stu; 
}
void printStudent(const Student& stu) { 
    cout << stu.personInfo.name << " , id: " << stu.id << " , year " 
    << stu.year << " , name " << stu.name << " , major " << stu.major 
    << " , gpa " << stu.gpa << " , age " << stu.personInfo.age << endl;
}
int main() { 
    Student john, anna = {2,3,"Anna", 20, "SE", 3.95};
    cout << "Anna is initialized: " << anna.gpa << endl;
    cout << "Uninitialized ID of john: " << john.id << endl;

    john.id = 1; 
    john.year = 2; 
    john.personInfo.name = "John"; 
    john.major = "CS";
    john.gpa = 4.0;
    john.personInfo.age = 21; 

    cout << "Initialized ID of John: " << john.id << endl;
    printStudent(john);

    // Student test = addStudent(); 
    // printStudent(test);
    // anna = addStudent(); 
    // cout << "Printing anna: "; 
    // printStudent(anna); 

    Student students[2] = {john, anna};
    for(int i = 0; i < 2; i++) { 
        printStudent(students[i]); 
    }
    cout << "# of bytes for a Student variable: " << sizeof(Student) << endl;
    cout << "Starting address for john variable: " << &john << endl;
    cout << "Address for id field: " << &(john.id) << endl;
    cout << "Address for year field: " << &(john.year) << endl;

    Student* p = &john; 
    cout << "Using pointer to refer to a field: " << (*p).gpa 
         << " short-hand notation: " << p->gpa << endl;
    
    cout << "How many students in the class? "; 
    int size; 
    cin >> size; 

    p = new Student[size];
    for (int i = 0; i < size; i++) { 
        p[i] = addStudent(); 
        printStudent(p[i]);
    }
    delete[] p; 
    p = NULL;


    return 0; 
}