// =====================================================================
// This program demonstrates the concept of Encapsulation in C++.
// The clsPerson class contains three private data members:
// - id (read-only): uniquely identifies the person, assigned once and never modified.
// - firstName and lastName: can be set and retrieved via public setters/getters.
//
// Why is `id` read-only?
// ➤ In real-world scenarios, an identifier like ID should not change after being set.
// ➤ We only provide a getter for it, no setter, to ensure integrity and protect the object state.
//
// This approach reinforces Encapsulation by exposing only necessary operations,
// and protecting the object from unintended external modifications.
// =====================================================================

#include <iostream>
using namespace std;

class clsPerson {
private:
    int id;                  // Read-only (no setter)
    string firstName;
    string lastName;

public:
    // Constructor to initialize id
    clsPerson(int personId) {
        id = personId;
    }

    // Setters
    void setFirstName(string fName) {
        firstName = fName;
    }

    void setLastName(string lName) {
        lastName = lName;
    }

    // Getters
    int getId() {
        return id;
    }

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
    clsPerson person(101);  // id is set once through constructor

    person.setFirstName("John");
    person.setLastName("Doe");

    cout << "ID: " << person.getId() << endl;
    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "Full Name: " << person.getFullName() << endl;

    return 0;
}
