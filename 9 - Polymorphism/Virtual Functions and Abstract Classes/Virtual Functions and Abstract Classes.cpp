// This code demonstrates the concept of pure virtual functions and abstract classes in C++.
// clsMobile is an abstract class that defines a contract with pure virtual functions.
// Any class that inherits from clsMobile (e.g., clsiPhone, clsSamsungNote10) must implement all pure virtual functions.
// This enforces a strict interface, making clsMobile behave like a contract or interface.

//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud
#include <iostream>
using namespace std;


//Abstract Class / Interface / Contract.
class clsMobile
{
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;

};

class clsiPhone : public clsMobile
{

    //This class signed a contract with clsMobile abstract class   therefore it should implement everything in the abstract class

public:

    void Dial(string PhoneNumber)
    {

    };

    void SendSMS(string PhoneNumber, string Text)
    {

    };

    void TakePicture()
    {


    };

    void MyOwnMethod()
    {

    }

};


class clsSamsungNote10 : public clsMobile
{
    //This class signed a contract with clsMobile abstract class   therefore it should implement everything in the abstract class

public:
    void Dial(string PhoneNumber)
    {

    };

    void SendSMS(string PhoneNumber, string Text)
    {

    };

    void TakePicture()
    {


    };

};


int main()

{
    clsiPhone iPhone1;
    clsSamsungNote10 Note10;

    system("pause>0");
    return 0;

}