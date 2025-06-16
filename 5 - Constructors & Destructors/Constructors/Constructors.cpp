// ========================================================================
// This program demonstrates the importance of constructors in C++.
//
// A constructor is a special method that is automatically called
// when an object of the class is created. It is used to initialize
// data members and ensure the object starts in a valid state.
//
// In this example:
// - We define a class `clsPerson` with two data members: Name and Age.
// - The constructor initializes the object with default or provided values.
// - Without a constructor, the object would start with garbage values
//   or require manual setting after creation.
// ========================================================================

#include <iostream>
using namespace std;

class clsPerson {
private:
    string Name;
    int Age;

public:
    // Constructor to initialize Name and Age
    clsPerson(string name, int age) {
        Name = name;
        Age = age;
    }

    void PrintInfo() {
        cout << "Name: " << Name << endl;
        cout << "Age : " << Age << endl;
    }
};

int main() {
    // When we create the object, the constructor runs automatically
    clsPerson person1("Ahmed", 30);

    person1.PrintInfo();

    return 0;
}
