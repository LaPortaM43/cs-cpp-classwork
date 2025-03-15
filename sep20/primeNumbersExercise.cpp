// primeNumbersExercise.cpp 
// Matthew LaPorta, s1359142 

#include <iostream>
using namespace std; 

int main()
{
    int counter = 0; 
    int num = 2; 
     // bool isPrime = true; 
    while (counter < 51) 
    { 
        if (num % num == 0) 
        { 
            cout << " " << num << " is prime" << endl;
            counter = counter + 1;  
            num = num + 1;   
        }
        else 
        {
            // isPrime = false; 
            num = num + 1; 
            continue;
        }
    }

    cout << "test";
    return 0;
    
    /*
    int num = 10; 
    int counter = 0;
    bool isPrime = true; 
    for (int prime = 2; prime < num; prime++)
    { 
        if (num % prime == 0) 
        {   
            isPrime = false; 
            cout << num << " is not a prime";
            break;
        }
        cout << num << " is a prime." << endl;
    }
    */  
}