// ========================================================================
// This program demonstrates the concept and importance of a Copy Constructor in C++.
//
// A Copy Constructor is a special constructor used to create a new object
// as a copy of an existing object. It ensures that the new object
// gets its own copy of the data instead of sharing memory.
//
// In this example:
// - We define a class `clsPerson` with two data members: Name and Age.
// - We create a custom Copy Constructor to explicitly copy values from one object to another.
// - This is especially important when working with pointers or dynamic memory
//   to prevent shallow copy issues (like two objects pointing to the same memory).
// ========================================================================

#include <iostream>
using namespace std;

class clsPerson {
private:
    string Name;
    int Age;

public:
    // Constructor
    clsPerson(string name, int age) {
        Name = name;
        Age = age;
    }

    // Copy Constructor
    clsPerson(const clsPerson& other) {
        Name = other.Name;
        Age = other.Age;
        cout << "Copy constructor called!" << endl;
    }

    void PrintInfo() {
        cout << "Name: " << Name << endl;
        cout << "Age : " << Age << endl;
    }
};

int main() {
    clsPerson person1("Mohamed", 28);   // Regular constructor
    clsPerson person2 = person1;        // Copy constructor

    cout << "\nOriginal Object:" << endl;
    person1.PrintInfo();

    cout << "\nCopied Object:" << endl;
    person2.PrintInfo();

    return 0;
}
