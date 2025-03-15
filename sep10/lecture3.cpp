// Lecture 3 

#include <iostream> 
using namespace std; 
int main()
{ 

    const double PI = 3.1415; 
    double radius = 1; 
    double area = PI * radius * radius;
    cout << "area of radius 1: " << area << endl; 
    // Assignment operation results in a value
    // Same as left variable 
    cout << (radius = 2) << endl; 

    int op1, op2; 
    op1 = 1; 
    op2 = 2; 

    cout << "sum of 1 and 2: " << op1 + op2 << endl; 

    cout << "different between 1 and 2: " << op1 - op2 << endl; 

    cout << "int division: " << op1 / op2 << endl;

    double value = op1; 
    cout << "real value division: " << value / op2 << endl; 

    cout << "real value division: " << (double)op1 / op2 << endl; 

    cout << static_cast <double>(op1) / op2 << endl; 

    op1 = (int)value; // explicit cast

    cout << "remainder of int division: " << op1 % op2 << endl; 

    cout << "Exercise: \n"; 
    int x, y, a, b, c; 
    x = 4;
    y = 10; 
    a = b = c = 2; // a=2, b=2, c=2; 

    cout << (3 + 4 * x) / 5 - 10 * (y-5) * (a + b + c) / x + 9 * (4 / x + (9 + x) / y) << endl; 


    op1++; // op1 = op1 + 1; 
    cout << "Op1 increased by 1: " << op1 << endl; 
    --op1; // op1 = op1 - 1; 
    cout << "op1 decreased by 1: " << op1 << endl; 

    int postIncrement = 2 * (op1++); 
    cout << "postIncrement = " << postIncrement << ", op1 = " << op1 << endl; 

    int preIncrement = 2 * (++op1); 
    cout << "preIncrement = " << preIncrement << ", op1 = " << op1 << endl; 

    op1 += 1; // op1 = op1 + 1; 

    op1 *= 1+2; // op1 = op1*(1+2); 

    int larger = op1 > op2 ? op1 : op2; 

    cout << "Larger value between op1 and op2 " << larger << endl; 

    cout << "Input an int value for op1: "; 
    cin >> op1; 
    cout << "You inputted " << op1 << endl; 

    return 0; 
}