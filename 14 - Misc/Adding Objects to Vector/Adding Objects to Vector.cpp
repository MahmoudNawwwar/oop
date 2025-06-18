// This code demonstrates how to create a class with a parameterized constructor,
// store multiple objects of that class inside a vector, and iterate through them
// to call a method on each object.

#include <iostream>
#include <vector>

using namespace std;

class clsA
{
public:
    // Parameterized Constructor
    clsA(int value)
    {
        x = value;
    }

    int x;

    void Print()
    {
        cout << "The value of x = " << x << endl;
    }
};

int main()
{
    vector<clsA> v1;
    short NumberOfObjects = 5;

    // Inserting objects into the vector
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1.push_back(clsA(i));
    }

    // Printing each object's content
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1[i].Print();
    }

    system("pause>0");
    return 0;
}
