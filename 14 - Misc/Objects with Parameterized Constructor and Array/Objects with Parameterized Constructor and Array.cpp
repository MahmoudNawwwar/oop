// Example of using parameterized constructor with an array of objects in C++
// This code demonstrates how to initialize an array of objects using parameterized constructors,
// and then access each object using a loop to print its values.

#include <iostream>
using namespace std;

class clsA {
public:
    // Parameterized Constructor
    clsA(int value) {
        x = value;
    }

    int x;

    void Print() {
        cout << "The value of x = " << x << endl;
    }
};

int main() {
    // Initializing an array of 3 objects using the parameterized constructor
    clsA obj[] = { clsA(10), clsA(20), clsA(30) };

    // Printing each object's value using the Print method
    for (int i = 0; i < 3; i++) {
        obj[i].Print();
    }

    system("pause>0");
    return 0;
}
