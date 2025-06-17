// ==============================================================================
// This program demonstrates the concept of Destructors in C++.
//
// - When an object is created, the **constructor** is automatically called.
// - When an object goes out of scope or is deleted, the **destructor** is called.
//
// ▶ In `Fun1()`, the object is created on the stack (local scope), so the destructor
//   is automatically called after the function ends.
//
// ▶ In `Fun2()`, the object is created on the heap using `new`, so we must explicitly
//   use `delete` to call the destructor and free memory.
//
// This demonstrates how destructors are important for memory management in C++.
// ==============================================================================

#include <iostream>
using namespace std;

class clsPerson {
public:
    string FullName;

    // Constructor
    clsPerson() {
        FullName = "Mohammed Abu-Hadhoud";
        cout << "\nHi, I'm Constructor";
    }

    // Destructor
    ~clsPerson() {
        cout << "\nHi, I'm Destructor";
    }
};

void Fun1() {
    clsPerson Person1;
    // Destructor will be called automatically when Person1 goes out of scope.
}

void Fun2() {
    clsPerson* Person2 = new clsPerson;
    // Since we used new, we must delete manually to call the destructor.
    delete Person2;
}

int main() {
    Fun1();
    Fun2();

    system("pause>0");
    return 0;
}
