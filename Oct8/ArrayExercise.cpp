// ArrayExercise.cpp
// Matthew LaPorta, s1359142 

#include <iostream> 
using namespace std; 


const int COLUMN_SIZE = 3;
void initializeMatrix(int myMatrix[][COLUMN_SIZE], int rowSize) {
    for(int row = 0; row < rowSize; row++) { 
        for(int col = 0; col < COLUMN_SIZE; col++) { 
            cout << "Enter an int: "; 
            cin >> myMatrix[row][col];
        }
    }
}
void calculateColumnSums(const int myMatrix[][COLUMN_SIZE], 
    int rowSize, int columnSums[]) {
    
   for(int col = 0; col < COLUMN_SIZE; col++) { 
        int total = 0; 
        for(int row = 0; row < rowSize; row++) { 
            total += myMatrix[row][col];
        }
    columnSums[col] = total;
    }
}
int findMaxValue(const int myArray[], int arraySize) {
    int max = 0; 
    for(int i = 0; i < arraySize; i++) { 
        max = myArray[i]; 
        if(myArray[i] > max) {
            max = myArray[i];
        }
    }
    return max;
}

int findIndexOfValue(const int myArray[], int arraySize, int value,
    int indexes[]) {
    int counter = 0;
    for(int i = 0; i < COLUMN_SIZE; i++) { 
        if (myArray[i] == value) {
            indexes[counter] = i;
            counter++;
        }
    }
    return counter;
}

void printMatrix(const int myMatrix[][COLUMN_SIZE], int rowSize) {
    cout << "The Matrix is: " << endl;
    for(int row = 0; row < rowSize; row++) { 
        for(int col = 0; col < COLUMN_SIZE; col++) {
            cout << "   " << myMatrix[row][col] << "   ";
        }
    cout << endl;
    }
}

void printArray(const int myArray[], int arraySize) {
    cout << "The column sums: " << endl;
    for(int i = 0; i < arraySize; i++) { 
        cout << "   " << myArray[i] << "   ";
    }
    cout << endl;
}

int main() { 
    const int rowSize = 2;
    int myMatrix[rowSize][COLUMN_SIZE];
    int columnSums[COLUMN_SIZE] = {};

    initializeMatrix(myMatrix, rowSize);
    cout << endl;
    printMatrix(myMatrix, rowSize);
    cout << endl;
    calculateColumnSums(myMatrix, rowSize, columnSums);
    cout << endl;
    printArray(columnSums, COLUMN_SIZE);
    cout << endl;
    cout << "ColumnSums Array Max: " << findMaxValue(columnSums, COLUMN_SIZE);
    cout << endl;

    int sums[COLUMN_SIZE] = {};
    int largestSum = findMaxValue(sums, COLUMN_SIZE); 
    int indexes[COLUMN_SIZE] = {}; 
    int counter = findIndexOfValue(sums, COLUMN_SIZE, largestSum, indexes);
    
    cout << "Largest sum: " << largestSum << endl;
    cout << "The columns with the largest sum: \n"; 
    printArray(indexes, counter);
    return 0; 
}