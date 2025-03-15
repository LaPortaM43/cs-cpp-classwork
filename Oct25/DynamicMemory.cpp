// DynamicMemory.cpp 

# include <iostream> 
using namespace std; 

void printArray(int grades[], int size) {
    // int length = sizeof(grades) / sizeof(grades[0]);
    // cout << length << endl;
    for(int i = 0; i < size; i++) {
        cout << grades[i] << " "; 
    }
    cout << endl;
}

void getGrades(int grades[], int size) { 
    for (int i = 0; i < size; i++) { 
        cout << "Enter a grade: "; 
        cin >> grades[i]; //cin >> *(grades + i); 
    }
}

int* getGrades (int size) { 
    int* grades = new int[size]; 
    for(int i = 0; i < size; i++) { 
        cout << "Enter a grade: ";
        cin >> grades[i]; // cin >> *(grades + i) 
    }
    return grades; 
}

int reverse(const int* original, int size) { 

    int* reversedArray = new int[size]; 
    for(int i = 0, j = size - 1; i < size; i++, j--) { 
        reversedArray[i] = original[j];
    }
    return reversedArray; 
}


int main () { 

    int* size = new int; 
    cout << "How many students? ";
    cin >> *size; 

    int * dynamicArray = new int[*size]; 
    int* pGrades = getGrades(*size); 
    printArray(pGrades, *size); 

    int* reversedArray = reverse(*pGrades, *size);
    printArray(reversedArray, *size);
    delete[] reversedArray;
    reversedArray = NULL;



    delete[] pGrades; 
    pGrades = NULL;



    // getGrades(dynamicArray, *size);
    // printArray(dynamicArray, *size);
    delete[] dynamicArray;
    dynamicArray = NULL;

    delete size; 
    size = NULL; 




    // cout << *dynamicArray << endl; //cause running time error 


    // int grades[3] = { 100, 85, 75 }; 
    // int* p = grades; 
    // cout << "2nd element: " << p[1] << " " << *(p+1) << endl;
    // p++; // p = p + 1 
    // cout << "Now p points to: " << *p << endl;
    // p--; 
    // cout << "Now p points to the 1st element: " << *p << endl;
    // printArray(grades, 3); 
    return 0; 

}