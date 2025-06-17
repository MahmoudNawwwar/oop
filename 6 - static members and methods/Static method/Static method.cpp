// Static method.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class clsPerson {
 //data members
private:
    int Id;
    string firstName;
    string secondName;
    string fullName;
    string Email;
    string phone;


//constractor
    clsPerson(int id, string firstName, string secondName, string fullName, string Email, string phone) {
        this->Id = id;
        this->firstName = firstName;
        this->secondName = secondName;
        this->fullName = fullName;
        this->Email = Email;
        this->phone = phone;
    }

    //getters
    int getId() {
        return Id;
    }
    string getFirstName() {
        return firstName;
    }
    string getsSecondName() {
        return secondName;
    }
    string getFullName() {
        return fullName;
    }
    string getEmail () {
        return Email;
    }
    string getPhone() {
        return phone;
    }
    //setters
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }
    void setFirstName(string secondName) {
        this->secondName = secondName;
    }
    void setFirstName(string fullName) {
        this->fullName = fullName;
    }
    void setFirstName(string Email) {
        this->Email = Email;
    }
    void setPhone(string phone) {
        this->phone = phone;
    }

    void print() {
        cout << "Id is: " << Id
            << "\nFirstName is: " << firstName
            << "\nSecondName is: " << secondName
            << "\nFullName is: " << fullName
            << "\nEmail is: " << Email
            << "\nPhone is: " << phone;



    }








};



















int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
