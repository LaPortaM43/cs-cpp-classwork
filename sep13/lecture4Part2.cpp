// lecture4Part2.cpp

#include <iostream>
#include <string> 
#include <cmath>
#include <iomanip>


using namespace std; 

int main()
{
    double pi = acos(-1);
    cout << "default pi: " << pi << endl; 
    cout << fixed << setprecision(10); 
    cout << "Shown with 10 signiciant digits: " << pi << endl; 

    cout << right << setprecision(3); 
    cout << "Show with 3 significant digits: " << setw(13) << pi << endl; 
    cout << setw(45) << 0.1 * pi << endl; 
    
    cout << "2 to the power of 4: " << setw(24) << pow(2,4) << endl; 
    return 0; 
}
