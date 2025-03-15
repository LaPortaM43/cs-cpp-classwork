// lecture5.cpp
// Matthew LaPorta, s1359142

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << right; 
    cout << setw(8) << "C++" << setw(10) << "24Fall" << endl; 
    cout << setw(8) << "Java" << setw(10) << "23Fall" << endl; 
    cout << setw(8) << "Python" << setw(10) << "23Spring" << endl; 

    double pi = acos(-1);
    double degree30 = 30 * pi / 180; 
    double sin30 = sin(degree30);
    double cosin30 = cos(degree30); 
    double tan30 = tan(degree30); 

    return 0; 
}