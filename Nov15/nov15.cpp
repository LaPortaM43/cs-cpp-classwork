#include <iostream>
#include <string> 
using namespace std; 

// template function 
template <typename T>

T larger(T a, T b) { 
    return a > b ? a : b; 
}

/*
double larger(double a, double b) { 
    return a > b ? a : b; 
}
*/ 
template <typename T>
T getInput() { 
    cout << "Enter a value: "; 
    T input;
    cin >> input; 

    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Try again: "; 
        cin >> input; 
    }
    return 0; 
}

int main() { 

    int int1 = 2, int2 = 3; 
    int1 = getInput<int>(); 
    int2 = getInput<int>();
    cout << larger <int>(int1,int2) << endl;

    double db1 = 1.1, db2 = 0.1; 
    db1 = getInput<double>(); 
    db2 = getInput<double>();
    cout << larger <double>(db1, db2) << endl;

    string str1 = "Yes"; 
    string str2 = "No"; 
    cout << larger<string>(str1,str2) << endl;
    // cout << larger<char>('a', 'b') << endl;
    cout << larger('a', 'b') << endl;

    return 0; 
}