// grade.cpp
// Matthew LaPorta, s1359142 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int numericGrade = 0; 
    cout << "What is your midterm grade? ";
    cin >> numericGrade; 

    if (numericGrade < 0 || numericGrade > 100) 
    {
        cout << "Not a valid grade";
    }
    else 
    {
        char letter;
        string message;
        if (numericGrade >= 90) 
        {
            letter = 'A';
            message = "Well done.";
        }
        else if (numericGrade >= 80) 
        {
            letter = 'B';
            message = "Well done.";
        }
        else if (numericGrade >= 70) 
        {
            letter = 'C';
            message = "Do better.";
        }
        else
        {
            letter = 'F';
            message = "Do better.";
        }

        cout << "Your letter grade is: " << letter << endl; 

        switch (letter)
        {
        case 'A': 
            cout << "Your GPA will be 4.0"; 
            break; 
        case 'B': 
            cout << "Your GPA will be 3.0"; 
            break; 
        case 'C': 
            // cout << "Your GPA will be 2.0";
            cout << "You pass the exam!"; 
            break;
        default: // if previous cases are not matched, default block will be executed 
            cout << "No contribution to your GPA";
            break;
        }
        cout << "\n";
    }
    return 0; 
}