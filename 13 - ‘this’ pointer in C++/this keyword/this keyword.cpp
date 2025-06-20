﻿// This program demonstrates the use of the 'this' keyword in C++ to distinguish between class members and constructor parameters, and to pass the current object to a static function.

#include <iostream>  
using namespace std;

class clsEmployee
{
public:
    int ID;
    string Name;
    float Salary;

    clsEmployee(int ID, string Name, float Salary)
    {
        this->ID = ID;
        this->Name = Name;
        this->Salary = Salary;
    }

    static void Func1(clsEmployee Employee)
    {
        Employee.Print();
    }

    void Func2()
    {
        Func1(*this);
    }

    void Print()
    {
        cout << ID << "  " << Name << "  " << Salary << endl;
    }
};

int main()
{
    clsEmployee Employee1(101, "Ali", 5000);
    Employee1.Print();
    Employee1.Func2();

    return 0;
}
