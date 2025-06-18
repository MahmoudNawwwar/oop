// This code demonstrates the concept of virtual functions and runtime polymorphism in C++.
// The base class clsPerson declares a virtual function Print().
// Derived classes clsEmployee and clsStudent override the Print() method.
// At runtime, when accessing the derived objects via base class pointers, the correct overridden version is called.
#include <iostream>

using namespace std;

class clsPerson
{

public:

    virtual void Print() {
        cout << "Hi,  I am a person.\n";
    }

};

class clsEmployee : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm an Employee\n";
    }
};

class clsStudent : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm a student\n";
    }
};


int main()

{
    clsEmployee Emp;
    clsStudent std;
    Emp.Print();
    std.Print();



    clsPerson* Per1 = &Emp;
    clsPerson* per2 = &std;

    Per1->Print();
    per2->Print();


    system("pause>0");
    return 0;
}