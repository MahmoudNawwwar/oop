// ===========================================
// File: class_members.cpp
// This file explains the concept of Class Members:
//  - Data Members: variables inside the class (e.g., FirstName, LastName)
//  - Member Methods: functions inside the class (e.g., FullName())
// ===========================================

#include <iostream>
using namespace std;

// Define a class with data members and a member function
class clsPerson {
public:
    // These are called Data Members
    string FirstName;
    string LastName;

    // This is a Member Method (Function inside the class)
    string FullName() {
        return FirstName + " " + LastName;
    }
};

int main() {
    // Create an object (instance) of the class
    clsPerson Person1;

    // Assign values to data members
    Person1.FirstName = "Mahmoud";
    Person1.LastName = "Nawwar";

    // Call member function and display result
    cout << "Person1: " << Person1.FullName() << endl;

    return 0;
}
