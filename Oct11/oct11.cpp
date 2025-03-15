// oct11.cpp 
// Matthew LaPorta, s1359142 

#include <iostream> 
using namespace std; 

void swap(int& a, int& b) {
    int temp = a; 
    a = b; 
    b = temp;
}

void swap(int* a, int* b) { 
    int temp = *a; 
    *a = *b;
    *b = temp; 

}

int main() { 
    int age = 20; 
    int grades[4] = { 100, 80, 70, 60 }; 
    cout << "Location of age: " << &age << endl;
    cout << "Location of first element in grades: " << grades << endl;

    int * pInt = &age; 
    cout << "pINT =" << pInt << endl;
    cout << "dereferencing using pointer: " << *pInt << endl;

    *pInt = 21; // the variable saved at pInt is changed to 21 

    cout << "age=" << *pInt << ' ' << age << endl;

    // change pInt pointint to the grades array

    pInt = grades;
    cout << "First element value: " << grades[0] << ' ' << *grades << ' ' << *pInt << endl;

    // grades++; // grades ia a constant pointer 

    for (int i = 0; i < 4; i++) { 
        cout << "element at index i: " << grades[i] << *(pInt + i) << ' ' << *(grades+i) << endl;
    }

    cout << *pInt + 1 << endl; // evaluate indirection first 

    double balance = 100.5; 
    double* pDouble = &balance; // pointer type needs to be matched 

    int a = 2, b = 3; 
    int* pA, *pB; 
    pA = &a; 
    pB = &b; 
    cout << "pA= " << pA << ' ' << &a << endl;
    cout << "pB= " << pB<< ' ' << &b << endl;

    pA = pB; // a = b 

    cout << "pA= " << pA << endl;
    cout << "pB= " << pB << endl;
    cout << "value pointed by pA: " << *pA << endl;
    cout << "value pointed by pB: " << *pB << endl;
    cout << "A changed and B not changed, a=" << a << ", b=" << b << endl;

    pA = NULL; // not able to dereference NULL 
    // It is a running time error dereferencing NULL 
    if(pA != NULL) {
          cout << "Trying to dereference NULL" << *pA << endl;
    }

    a = 5; 
    b = 6; 
    swap(&a, &b);

    cout << "A and B swapped, a= " << a << ", b=" << b << endl;
    return 0; 
}