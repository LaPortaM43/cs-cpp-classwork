// lecture7.cpp
// Matthew LaPorta, s1359142 

# include <iostream>
# include <iomanip> 
using namespace std;

int larger( int num1, int num2)
{
    int result; 
    if(num1 > num2)
    {
        result = num1; 
    }
    else
    {
        result = num2; 
    }
    return result; 
}

void formatRow(int degree, string alignment, int precision, int width) 
{
    if(alignment == "right")
    {
        cout << right; 
    }
    else if(alignment == "left")
    {
        cout << left; 
    }
    cout << fixed << setprecision(precision); 
    double radians = degree * 3.14 / 180;
    double sines = sin(radians); 
    double cosines = cos(radians);
    double tangent = tan(radians);
    cout << setw(width) << degree << setw(width) << radians << setw(width) 
         << sines << setw(width) << cosines << setw(width) << tangent << endl; 
}

int getIntInput() { 
    cout << "Enter an integer: "; 
    int input; 
    cin >> input; 
    while(cin.fail()) { // user gives value which can't be converte to integer type 
        cout << "Not a valid input, enter again: "; 
        cin.clear(); 
        cin.ignore(1000, '\n');
        cin >> input; 
    }
    return input; 
}

void swap(int& num1, int& num2) 
{
    int temp = num1; 
    num1 = num2;
    num2 = temp;
    cout << "Inside swap: num1= " << num1 << ", num2= " << num2 << endl;
}
void getTwoInts(int& a, int& b)
{
    a = getIntInput();
    b = getIntInput();

}
int main()
{
    int a = 2, b = 3; 
    getTwoInts(a, b);
    cout << "a updated to input, a " << a << "b=" << b << endl;
    int result = larger(a,b); 
    cout << "The larger value between 2 and 3: " << result << endl;


    formatRow(30, "right", 2, 8);
    formatRow(60, "right", 2, 8);
    int age = getIntInput();
    cout << "Age: " << age << endl;
    cout << "Calling swap function";
    swap(a, b); 
    cout << "a= " << a << ", b=" << b << endl;

    int& refA = a;
    cout << "Initial state: refA=" << refA << ", a=" << a << endl;
    a++;
    cout << "After update: refA=" << refA << ", a=" << a << endl;

    return 0;
}