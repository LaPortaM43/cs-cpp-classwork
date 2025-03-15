// lecture6.cpp
// Matthew LaPorta, s1359142 

#include <iostream>
using namespace std; 

int main()
{ 
    int num = 0; 
    // compare = with == 
    // non 0 integers will be considered as true while 0 is evaluated as false 

    if (num == 10)
    {
        cout << "It is 10;"; 
    }
    else
    {
        cout << "Not 10;"; 
    }
    
    bool condition = (num < 10) || (++num > 10); 
    cout << "num is not updated due to short circuit, " 
         << num << ' ' << boolalpha << condition << endl; 

    condition = (num > 10)  && (--num > 10);
    cout << "num is not updated, num= " << num << " condiiton as "
         << condition << endl; 
        
    num = 20; 
    condition = (num < 10) || (++num > 10); 
    cout << "num is updated to 21, num= " << num 
         << "the condition is true: " << condition << endl; 

    cout << "Enter a positive integer at least 2: "; 
    cin >> num; 
    while(cin.fail() || num < 2)
    { 
        if(cin.fail())
        {
            cout << "Not a numeric value! Enter again: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if(num < 2) 
        {
            cout << "The value needs to be >= 2, enter again: ";
        
        }
        cin >> num; 
    }
    cout << "The posiive integer is " << num << endl;

    int counter; 
    for(int possibleDiv = 1; possibleDiv <= num ; possibleDiv++) 
    {
        if(num% possibleDiv == 0)
        {
            cout << possibleDiv << " is a divisor of " << num << endl; 
            counter++;
        }
    }

    cout << num << " has " << counter << " divisors"; 


    return 0; 
}