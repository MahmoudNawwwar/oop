// This code demonstrates a Nested Class in C++.
// 'clsAddress' is defined inside 'clsPerson', showing how a class can be encapsulated within another.
// The nested class is used to represent the address details of a person.
// This code demonstrates a Nested Class in C++.
// 'clsAddress' is defined inside 'clsPerson', showing how a class can be encapsulated within another.
// The nested class is used to represent the address details of a person.

#include<iostream>
using namespace std;

class clsPerson {

    class clsAddress
    {
    public:
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;

        void Print()
        {
            cout << "\nAddress:\n";
            cout << AddressLine1 << endl;
            cout << AddressLine2 << endl;
            cout << City << endl;
            cout << Country << endl;
        }
    };

public:
    string FullName;
    clsAddress Address;

    clsPerson()
    {
        FullName = "Mahmoud Nawwar";
        Address.AddressLine1 = "Building 10";
        Address.AddressLine2 = "Queen Rania Street";
        Address.City = "Amman";
        Address.Country = "Jordan";
    }


};

int main()

{

    clsPerson Person1;

    Person1.Address.Print();

    system("pause>0");
    return 0;
}