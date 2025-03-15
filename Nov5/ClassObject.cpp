// ClassObject.cpp

#include <iostream>
using namespace std;


class Circle { 

    private: 
        double radius; 
    
    public: 
        // Getter method 
        double getRadius() { 
            return radius; 
        }
        // Setter method 
        void setRadius(double newRadius) { 
            if (newRadius > 0) {
                radius = newRadius; 
            }
        }
        // No-argument constructor 
        Circle() { 
            radius = 1.0;
        }
        // Overloaded constructor 
        Circle(double initialRadius) { 
            if (initialRadius > 0) {
                radius = initialRadius;
            } else { 
                radius = 1.0;
            }
        }

        void print() { 
            cout << "Circle object with radius: " << radius << endl;
        }
        
};

int main() { 
    Circle c1; // new Circle(5.1); 
    // c1.setRadius(5.0);
    cout << "C1 radius: " << c1.getRadius() << endl;

    // Object created using the constructor with arguments 
    Circle c2(2.0);
    cout << "C2 radius: " << c2.getRadius() << endl;

    c1.setRadius(100); 
    cout << "C1 Radius After Update: " << c1.getRadius() << endl;
    cout << endl;

    Circle objects[2] = {c1, c2}; 
    for(int i = 0; i < 2; i++) { 
        objects[i].print(); 
    }
    cout << endl;

    int size = 2;
    // The array is created using a no-argument constructor 
    Circle* dynamicArray = new Circle[size];
    for(int i = 0; i < size; i++) { 
        dynamicArray[i].setRadius(2 * dynamicArray[i].getRadius());
    }
    dynamicArray[0].print();
    delete[] dynamicArray; 
    dynamicArray = NULL;

    return 0; 

}