// This code demonstrates the concept of Upcasting and Downcasting in C++,
// and how access specifiers (public/protected/private) affect inheritance visibility.
//
// clsA is the base class, clsB privately inherits clsA,
// and clsC publicly inherits clsB.
// Try changing the inheritance type (public/protected/private) in clsB
// and observe what members are accessible from objects of clsB and clsC.
// Also, explore upcasting and downcasting behavior by using pointers and casting between classes.
#include <iostream>

using namespace std;

class clsPerson
{

public:

    string FullName = "Mohammed Abu-Hadhoud";

};

class clsEmployee : public clsPerson
{

public:
    string Title = "CEO";

};

int main()

{

#include <iostream>

    using namespace std;

    class clsPerson
    {

    public:

        string FullName = "Mohammed Abu-Hadhoud";

    };

    class clsEmployee : public clsPerson
    {

    public:
        string Title = "CEO";

    };

    int main()

    {

        clsEmployee Employee1;

        cout << Employee1.FullName << endl;

        ////upcasting
        //this will convert employee to person.
        clsPerson* Person1 = &Employee1;
        cout << Person1->FullName << endl;


        //clsPerson Person2;
        //cout << Person2.FullName << endl;

        ////downcasting : you cannot convert person to employee
        //clsEmployee* Employee2 = &Person2;



        system("pause>0");
        return 0;
    


    system("pause>0");
    return 0;
}