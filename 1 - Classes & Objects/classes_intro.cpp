
#include <iostream>
#include <string>
using namespace std;

class clsPerson {
public:
    string FirstName;
    string SecondName;


    string getFullName(){
        return FirstName + " " + SecondName;
    }



};


int main()
{
    clsPerson Person1;

    cin >> Person1.FirstName;
    cin >> Person1.SecondName;

    cout <<"The name is: " + Person1.getFullName();



}

