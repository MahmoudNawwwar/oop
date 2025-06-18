// ============================================================================
// This program demonstrates how objects in C++ can be passed to functions
// either by value or by reference. When passed by value, a copy is used,
// and changes inside the function do not affect the original object.
// When passed by reference, the original object is affected directly.
// ============================================================================

#include <iostream>
using namespace std;

class clsA {
public:
    int x;

    void Print() {
        cout << "The value of x = " << x << endl;
    }
};

// Function takes object by value (copy) - changes do NOT affect original
void Fun1(clsA A1) {
    A1.x = 100;
}

// Function takes object by reference - changes WILL affect original
void Fun2(clsA& A1) {
    A1.x = 200;
}

int main() {
    clsA A1;
    A1.x = 50;

    cout << "\nA1.x before calling Fun1:\n";
    A1.Print();  // Output: 50

    Fun1(A1);  // Passed by value (copy)
    cout << "\nA1.x after calling Fun1 (by value):\n";
    A1.Print();  // Still 50

    Fun2(A1);  // Passed by reference
    cout << "\nA1.x after calling Fun2 (by reference):\n";
    A1.Print();  // Now 200

    system("pause>0");
    return 0;
}
