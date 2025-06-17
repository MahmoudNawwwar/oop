// ============================================================================
// This program demonstrates the concept of Static Data Members in C++.
// - Static members are shared across all objects of the class.
// - They belong to the class itself, not to individual objects.
// - In this example, the static variable `counter` is incremented in the constructor,
//   meaning every time a new object is created, the same `counter` increases.
// - Modifying the static member using one object affects all other objects.
// ============================================================================

#include <iostream>
#include <string>
using namespace std;

class clsA {
public:
    int var;                      // Normal instance variable (each object has its own copy)
    static int counter;           // Static variable shared by all objects

    clsA() {
        counter++;                // Increments the shared static counter
    }

    void Print() {
        cout << "\nvar     = " << var << endl;
        cout << "counter = " << counter << endl;
    }
};

// Static variable must be initialized outside the class
int clsA::counter = 0; // Initialize static member to 0 
int main() {
    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    A1.Print();
    A2.Print();
    A3.Print();

    A1.counter = 500; // Changing the static member through one object

    cout << "\nAfter changing the static member 'counter' using A1:\n";
    A1.Print();
    A2.Print();
    A3.Print();

    system("pause>0");
    return 0;
}
