#include <iostream> 
#include <string> 
using namespace std; 


int main()
{
    /*
    cout << "Matthew\n"; 
    cout << "Senior"; 
    cout << endl; // same effect as \n 
    cout << "I like traveling";
    */

    cout << "Matthew" << endl << "Senior" << endl << "I have a dog";

    char letter;
    letter = 'A';
    cout << endl << letter << endl; // Error if variable isn't initialized 

    bool isTrue = true; 
    cout << "Display an int 1: " << isTrue << endl; 

    // int age; 
    int age(20); 
    cout << "Except age as 20: " << age << endl; 

    unsigned short members = 5; // No negative numbers
    cout << "All positive values and 0 for unsigned: " << members << endl; 

    cout << "memory size: " << sizeof(age) << "bytes\n" << "size of short type int: " 
         << sizeof(short) << "bytes\n";

    float fValue = 1.2; 
    double height = 1.65; 
    cout << "size for float: " << sizeof(fValue) << endl;
    cout << "size for double: " << sizeof(height) << endl; 

    string name; 
    cout << "Empty String: " << name << endl; 
    name = "Matt"; 
    cout << "Value is changed to Matt: " << name << endl; 

    return 0; 
}