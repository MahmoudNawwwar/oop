// ============================================================================
// This program defines a 'clsPerson' class that demonstrates key OOP concepts:
// - Encapsulation: keeping data members private and exposing them via getters/setters.
// - Constructor: initializes all member variables when an object is created.
// - Read-Only Property: 'ID' cannot be modified after object creation for data integrity.
// - Utility Methods: Print(), SendEmail(), and SendSMS() simulate actions for the object.
// ============================================================================

#include <iostream>
using namespace std;

class clsPerson {
private:
    int _ID;              // Read-only unique identifier
    string _FirstName;    // Person's first name
    string _LastName;     // Person's last name
    string _Email;        // Person's email address
    string _Phone;        // Person's phone number

public:
    // Constructor: Initializes all fields when an object is created
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // ============================
    // Read-Only Getter for ID
    // No setter provided → ID cannot be changed after construction
    int ID() {
        return _ID;
    }

    // ===== Setters =====
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    void setLastName(string LastName) {
        _LastName = LastName;
    }

    void setEmail(string Email) {
        _Email = Email;
    }

    void setPhone(string Phone) {
        _Phone = Phone;
    }

    // ===== Getters =====
    string FirstName() {
        return _FirstName;
    }

    string LastName() {
        return _LastName;
    }

    string Email() {
        return _Email;
    }

    string Phone() {
        return _Phone;
    }

    // Returns the full name by combining first and last names
    string FullName() {
        return _FirstName + " " + _LastName;
    }

    // Prints all person's details
    void Print() {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone;
        cout << "\n___________________\n";
    }

    // Simulates sending an email
    void SendEmail(string Subject, string Body) {
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;
    }

    // Simulates sending an SMS
    void SendSMS(string TextMessage) {
        cout << "\nThe following SMS sent successfully to phone: " << _Phone;
        cout << "\n" << TextMessage << endl;
    }
};

// ====================
// Main Program
// ====================
int main() {
    // Create a new person with full information using the constructor
    clsPerson Person1(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", "0098387727");

    // Print full details
    Person1.Print();

    // Simulate sending email
    Person1.SendEmail("Hi", "How are you?");

    // Simulate sending SMS
    Person1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}
