// exercise2.cpp 
// Matthew LaPorta, s1359142 

#include <iostream> 
using namespace std; 
int main()
{ 
    int x; 
    cout << "Enter a value between 100 and 999: "; 
    cin >> x; 
    cout << "You inputted " << x << endl; 

    int a = x / 100; // hundreds digit
    int b = (x / 10) % 10; // tens digit
    int c = x % 10; // ones digit

    cout << a << " " << b << " " << c << " " << endl; 

    int sum = a + b + c; 
    cout << "Sum: " << sum << endl; 

    bool divisible = (sum % 3 == 0) ? true : false; 

    cout << "Is sum divisible by 3 (True = 1, False = 0): " << divisible << endl;
    
    return 0; 
}
