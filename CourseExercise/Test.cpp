// Test.cpp

#include <iostream> 
#include <string> 
#include "Course.h" 
#include <cctype>
#include <sstream>  
#include <iomanip> 

using namespace std; 


void printSutdents(string* students, int size) { 
    for(int i = 0; i < size; i++) { 
        cout << students[i] << "|";
    }
    cout << endl;
}
int main() { 

    string empty;
    cout << "length of a string: " << empty.length() << endl;
    cout << boolalpha << "is the string empty?" << empty.empty() << endl;

    // empty = "Hello"+"World";
    empty += "Hello"; 
    cout << "new length of the string: " << empty.length() << endl;

    empty.append("World"); 
    cout << "10 as thew new length: " << empty.length() << endl;

    cout << "new content: " << empty << endl; 

    empty.insert(5, " "); // 5: index of insertion, " ": inserted value 
    cout << "after inserting a space: " << empty << endl;
    
    char lastChar = empty[empty.length()-1];
    cout << "expect d as output: " << lastChar << endl;

    bool property = isdigit(lastChar);
    cout << "is it a digit? " << property << endl; 

    property = islower(lastChar); 
    cout << "is it a lowercase? " << property << endl;

    property = isalnum(lastChar); // either a letter or a digit 
    cout << property << endl;

    char firstChar = empty.at(0); // same as indexing at line 35 
    cout << "first character: " << firstChar << endl;

    string substring = empty.substr(0, 5);  // 0: start index, 5: # of characters 
    cout << "Expect the first word: " << substring << endl;

    substring.assign("Tello");
    cout << "is substring smaller than empty? " << (substring < empty) << endl;
 
    string concat= empty + to_string(1.2); // convert 1 to a string object 
    cout << "appending 1.2: " << concat << endl;

    stringstream formatStream; 
    formatStream << fixed << setprecision(2); 
    formatStream << 1.2; 
    cout << "after setting: " << formatStream.str() << endl;

    
    /*
    Course cs310("CS310", 4);
    cout << cs310.getNumberOfStudents() << endl;
    string* students = cs310.getStudents();

    cs310.addStudent("John");
    cs310.addStudent("Joe");
    cs310.addStudent("Bob");
    cs310.addStudent("Mark");
    */
    return 0;
}
