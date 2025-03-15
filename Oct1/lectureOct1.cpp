// lectureOct1.cpp
// Matthew LaPorta, s1359142


#include <iostream> 
using namespace std; 

void printArray(double array[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << array[i] << "  "; 
    }
    cout << endl;
}

/* 
void getGrades(double grades[], int size) { 
    for(int i = 0; i < size; i++) {
        cout << "Grade for student " << i+1 << ": "; 
        cin >> grades[i];

    }
    cout << endl;
}
*/ 

// compare passing argumenting by value
void passArgByValue(double array[], double& value) { 
    array[0] = 0.01; 
    value = 0.01; 
}

void getGrades(double grades[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Grade for student " << i+1 << ": "; 
        cin >> grades[i];
    }
    cout << endl;
}

double averageGrades (double grade[], int size) {
    double total = 0; 
    for(int i = 0; i < size; i++) { 
        total = total + grade[i];
    }
    double average = total / size; 
    return average;
}

int main() {

    const int size = 4;
    double grades[size] = {}; // {100, 90, 80, 70};
    // programmers need to mensure valid reference
    // cout << "refer to an invalid index: " << grades[size] << endl;

    getGrades(grades, size);
    cout << "Average grade: " << averageGrades(grades, size); 
    
    /*
    passArgByValue(grades, grades[2]);
    cout << "After function call, the second argument: " << grades[2] << endl;
    cout << "Expect the first element is updated "; 
    printArray(grades, size);

    cout << "Address of first element: " << grades << endl;
    cout << "Address of first element: " << &grades[0] << endl;
    cout << "# of bytes for the array: " << sizeof(grades) << endl;
    cout << "# of bytes for each element: " << sizeof(grades[0]) << endl;
    cout << "size of the array: " << sizeof(grades) / sizeof(grades[0]) << endl;
    cout << "uninitialized array: " << grades[0] << endl;

    // grades[0] = 100; 
    // grades[1] = 90;
    double copy[size]; 
    // copy = grades; // error, as copy is a constant 

    for(int index = 0; index < size; index++) { 
        copy[index] = grades[index]; 
    }
    //content of copy array
    cout << "Copy array: "; 
    printArray(copy, size);

    cout << "Elements of the array: "; 
    for(int i = 0; i < size; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;
    */ 
    return 0; 
}
 