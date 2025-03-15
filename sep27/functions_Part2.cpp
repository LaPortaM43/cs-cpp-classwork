// Functions_part2.cpp
// Matthew LaPorta, s1359142


#include <iostream>
#include <string>
#include <iomanip> 

using namespace std; 

/*
void increment(int n) 
{
    cout << "Address of n: " << &n << endl;
    n++;
}

void showUserInfo(const string& name, int age) 
{
    // name = "change"; // will give an error due to the const declaration 
    cout << name << '\t' << age << endl; 
}

bool isPrime(int value = 2) 
{
    bool primeFlag = true; 
    for(int i = 2; i < value; i++)
    {
        if (value % 1 == 0)
        {
            primeFlag = false;
            break;
        }
    }
    return primeFlag;
}

void displayPrimes(int start = 2, int primes = 10, int perLine = 5)
{
    int counter = 0;
    while (counter < primes) 
    {
        if (isPrime(start)) 
        {
            cout << setw(5) << start;
            counter++;
            if (counter % perLine == 0) 
            {
                cout << endl;
            }
        }
        start++;  
    }
}

void fake_swap(int num1, int num2)
{
    int temp = num1; 
    num1 = num2; 
    num2 = temp;

}

void swap(int& num1, int& num2)
{
    int temp = num1; 
    num1 = num2; 
    num2 = temp;
}
void fake_swap(int num1, int num2);
void swap(int& num1, int& num2);
*/

int larger(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1; 
    }
    else
    {
        return num2;
    } 
}
double larger(double num1, double num2) 
{
    if (num1 > num2)
    {
        return num1; 
    }
    else
    {
        return num2;
    }
}

int main() 
{ 
    
    int a = 5, b = 6; 

    cout << fixed << setprecision(2) << larger(a, b) << endl;
    /*
    swap(a, b);

    cout << isPrime() << endl; // If 2 is prime
    cout<< isPrime(10) << endl; // If 10 is prime 

    // print first 10 primes in 2 lines
    displayPrimes(2);

    // print 20 primes in 5 lines, starting from 10 
    displayPrimes(10, 20, 5);
    
    showUserInfo("Matthew LaPorta", 21);
    int x = 1; 
    increment(x); 
    cout << "After function, x=" << x << endl;
    */

    return 0;
}