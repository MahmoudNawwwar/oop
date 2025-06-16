#include <iostream>
using namespace std;

class Person {
private:
    string NationalID;

protected:
    string LastName;

public:
    string FirstName;

    Person(string fName, string lName, string nID) {
        FirstName = fName;
        LastName = lName;
        NationalID = nID;
    }

    void DisplayFullName() {
        cout << "Full Name (from Person): " << FirstName << " " << LastName << endl;
    }

    void ShowPrivateID() {
        cout << "National ID (private): " << NationalID << endl;
    }
};

class Employee : public Person {
public:
    Employee(string fName, string lName, string nID)
        : Person(fName, lName, nID) {
    }

    void DisplayEmployeeInfo() {
        cout << "Accessing from Employee:\n";
        cout << "Last Name (protected): " << LastName << endl;
        cout << "First Name (public): " << FirstName << endl;
    }
};

int main() {
    Employee emp("Mahmoud", "Nawwar", "30208222101756");

    cout << "Access from outside class:\n";
    cout << "First Name (public): " << emp.FirstName << endl;

    emp.DisplayFullName();
    emp.ShowPrivateID();
    emp.DisplayEmployeeInfo();

    return 0;
}
