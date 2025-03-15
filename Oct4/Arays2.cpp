// Arrays2.cpp
// Matthew LaPorta, s1359142 

#include <iostream> 
using namespace std;

void test(int num, int nums[]) { 
    cout << "inside test function: address of num: " << &num;
    cout << "\n address of nums array: " << nums << endl;
    num = -1;
    nums[0] = 2; 
}

void getGrades(double grades[], int size) { 
  
}

void printArray(const double grades[], int size) { 
    // grades[0] = 100; // ensures that content is not modified 
    for(int i = 0; i < size; i++) { 
        cout << grades[i] << " ";
    }
    cout << endl;
}

void reverse(const double original[], double reversed[], int size) { 
    for(int i = 0, j = size - 1; i < size; i++, j--) {
        reversed[j] = original[i]; 
    }
}

void reverse(double original[], int size) { 
    for(int i = 0, j = size - 1; i < size / 2; i++, j--) { 
        int temp = original[i];
        original[i] = original[j]; 
        original[j] = temp;
    }
}

void shiftArrayToLeft(double original[], int size) { 
    for(int i = 0; i < size; i++) { 
        original[i-1] = original[i];

    }
}

int main() { 

    const int rows = 4; 
    const int cols = 3;
    int performance[rows][cols] = { {1, 2, 3}, 
                                    {4, 5, 6}, 
                                    {7, 8, 9}, 
                                    {10, 11, 12} };

    cout << "Element at 2nd row 2nd column: " << performance[1][1] << endl;

    for(int col = 0; col < cols; col++) { 

        cout << "Sum of all elements in column: " << (col + 1) << ": "; 
        int total = 0;
        for(int row = 0; row < rows; row++) { 
            total += performance[row][col];
        }
    cout << total << endl;
    }

    const int size = 4; 
    double original[size] = {1, 2, 3, 4};
    double result[size] = {};
    reverse(original, result, size);
    cout << "Original array: "; 
    printArray(original, size);
    cout << "After reverse: "; 
    printArray(result, size);
    cout << "Reverse in place: "; 
    reverse(original, size);
    printArray(original, size);
    cout << "Shifting array to the left: "; 
    shiftArrayToLeft(original, size);
    original[size - 1] = 10; 
    cout << "Expect as 3 2 1 10: ";
    printArray(original, size);
    
    /*
    int a = 10; 
    int array[3] = {1, 2, 3};
    cout << "in the main function, a is at: " << &a << endl;
    cout << "array is at: " << array << endl;
    cout << "a= " << a << endl;
    cout << "first element: " << array[0] << endl;
    */
    return 0;
}

