// Lecture4

#include <iostream> 
using namespace std; 
int main()
{ 
    string name; 
    // cout << "What is your name? "; 
    cin.ignore(1000, '\n');
    getline(cin, name); // cin >> name; 
    cout << "Your name is: " << name 
    << endl;  
    
    int year;
    string id; 

    cout << "Enter your id and year: "; 
    cin >> id >> year;

     while (cin.fail()) 
    {
        cout << "Not a valid input!\n";
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Enter a new int for year: ";
        cin >> year; 
        
    }
    cout << "Your ID is: " << id << " , Year is: " << year << endl;

    return 0; 
}