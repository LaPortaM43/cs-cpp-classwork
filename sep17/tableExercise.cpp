// tableExercise.cpp
// Matthew LaPorta, s1359142

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    double pi = acos(-1);
    double degree30 = 30 * pi / 180; 
    double degree60 = 60 * pi / 180;
    double sin30 = sin(degree30);
    double cosin30 = cos(degree30); 
    double tan30 = tan(degree30);
    double sin60 = sin(degree60);
    double cosin60 = cos(degree60);
    double tan60 = tan(degree60);

    cout << left;
    cout << "\n" << setw(14) << "Degrees" << setw(14) << "Radians" << setw(14) << "Sine" << setw(14) 
         << "Cosine" << setw(14) << "Tangent" << endl; 
    cout << fixed << setprecision(4) << endl; 
    cout << setw(14) << 30 << setw(14) << degree30 << setw(14) << sin30 << setw(14) << cosin30
        << setw(14) << tan30 << endl;

    cout << setw(14) << 60 << setw(14) << degree60 << setw(14) << sin60 << setw(14) << cosin60
        << setw(14) << tan60 << endl;
    cout << "" << endl;

    // cout << boolalpha << true << endl; 
    // cout << false << endl;
    // cout << noboolalpha << true << endl; // show 1 for true

    int numericGrade = 0; 
    cout << "What is your midterm grade? ";
    cin >> numericGrade; 

    cout << "Your grade lower than 60: " << boolalpha << (numericGrade < 60) << endl;


    // cout << "Your grade is in range [0, 100]: " << boolalpha << (101 > numericGrade > -1 ) << endl;
    cout << "Your grade is in range [0, 100]: " << ((numericGrade >= 0) && (numericGrade <= 100)) << endl;
    cout << "Your grade is outside range [0, 100]: " << (numericGrade < 0) || (numericGrade > 100);
    cout << "\n";

    // cout << "Assignment: " <<  (numericGrade = 69) << endl;
    cout << "== relationship: " << (numericGrade == 69) << endl;

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
            cout << "Your GPA will be 2.0";
            break;
        default: // if previous cases are not matched, default block will be executed 
            cout << "No contribution to your GPA";
            break;

        }
        cout << "Your midterm grade is: *" << letter << "* " << message << endl;
    }

    // cout << "Your midterm grade is: " << numericGrade << endl;

    return 0; 
}