// This code demonstrates the concept of friend functions in C++.
// A friend function is not a member of the class, but it has access to the class's private and protected members.
// Here, MySum is a friend function of clsA and can access _Var1, Var2, and _Var3.

#include<iostream>
using namespace std;

class clsA
{
private:
    int _Var1;

protected:
    int _Var3;

public:
    int Var2;

    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
        _Var3 = 30;

    }

    friend int MySum(clsA A);
};

//this function is normal function and not a member of any class
int MySum(clsA A1)
{
    return A1._Var1 + A1.Var2 + A1._Var3;
}

//int Fun2(clsA A1)
//{
//    return A1._Var1 + A1.Var2 + A1._Var3;
//}

int main()
{
    clsA A1;

    cout << MySum(A1);

    system("pause>0");

    return 0;
};