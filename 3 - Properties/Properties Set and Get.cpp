// =====================================================================
// This program demonstrates the concept of Encapsulation in C++.
// The clsPerson class contains two private data members: firstName and lastName.
// These members cannot be accessed directly from outside the class.
// 
// Instead, the class provides:
// - Setters (setFirstName, setLastName): to safely assign values.
// - Getters (getFirstName, getLastName): to safely retrieve values.
//
// This approach hides the internal representation of the object and
// provides controlled access, which is a core principle of OOP.
// =====================================================================

#include <iostream>
using namespace std;

class clsPerson {
private:
    string firstName;
    string lastName;

public:
    // Setters
    void setFirstName(string fName) {
        firstName = fName;
    }

    void setLastName(string lName) {
        lastName = lName;
    }

    // Getters
    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    // Utility method
    string getFullName() {
        return firstName + " " + lastName;
    }
};

int main() {
    clsPerson person;

    person.setFirstName("John");
    person.setLastName("Doe");

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "Full Name: " << person.getFullName() << endl;

    return 0;
}
