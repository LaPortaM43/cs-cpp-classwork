// dynamicListExercise.cpp

# include <iostream> 
using namespace std; 

void initialize(int* array, int size, int value) { 
    for(int i = 0; i < size; i++) { 
        array[i] = value; 
    }
}

void print(int* array, int size) { 
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int* appendElement(int* array, int& size, int newValue) { 

    size = size + 1;
    int* appendedArray = new int[size];

    for (int i = 0; i < size - 1; i++) {
        appendedArray[i] = array[i];
    }

    appendedArray[size - 1] = newValue;
    delete[] array; 
    array = NULL; 
    return appendedArray; 

    // print(array, size);
}

int* insertElement(int* array, int& size, int newValue, int index) { 

    

    /*
    int* insertedArray = new int[size]; 
    for(int i = 0; i < size; i++) { 
        insertedArray[i] = array[i]; 
    }

    insertedArray[index] = newValue; 
    */

    if (index >= 0 && index < size) { 
        int* newArray = new int[size + 1]; 

        for (int i = 0; i < index; i++) { 
            newArray[i] = array[i]; 
        }
        newArray[index] = newValue; 
        for (int i = index; i < size; i++) { 
            newArray[i + 1] 
        }
    }
    // finish this code 
    
    delete[] array; 
    array = NULL;
    return insertedArray; 


}

int* deleteElement(int* array, int& size, int index) { 

    int* deletedArray = new int[size-1]; 
    int newIndex = 0; 

    for(int i = 0; i < size; i++) { 
        if (index != i) { 
            deletedArray[newIndex] = array[i];
            newIndex++; 
        }
    }

    delete[] array; 
    array = NULL;
    return deletedArray; 
}

int main() { 

    cout << "Enter list size: ";
    int size;
    cin >> size;
    int *A = new int[size];
    int value = 0;
    cout << "Initial value for all elements in the list: ";
    cin >> value;
    initialize(A, size, value);
    cout << "All elements initialized as " << value<<endl;
    print(A, size);
    
    int newValue = 0;
    cout << "Appended value: ";
    cin >> newValue;
    A = appendElement(A,size,newValue); 
    cout<<"After appending " << newValue << endl;
    print(A, size);

    int index=0;
    cout<< "The index of the element to be added: ";
    cin >> index;
    cout << "Inserted value: ";
    cin >> newValue;
    A = insertElement(A,size,newValue, index);

    cout<< "After adding the element at "<<index<<endl;
    print(A, size);

    
    cout<< "The index of the element to be deleted: ";
    cin >> index;
    A = deleteElement(A,size,index);
    cout<< "After deleting the element at "<<index<<endl;
    print(A, size);
    delete [] A;
    A = NULL;
    

    return 0; 
}
