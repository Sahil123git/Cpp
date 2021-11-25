#include<iostream>
using namespace std;

class Base
{
public:                           //** This is like Interface in which both are abstract **
    virtual void fun() = 0;       //This is abstract or virtual function

    virtual void fun2() = 0;      //This is also abstract or virtual function
};

class Derived :public Base
{
public:
    void fun()
    {
        cout<<"DERIVED fun"<<endl;
    }
    void fun2()
    {
        cout<<"DERIVED fun 2"<<endl;
    }
};

int main()
{
    Derived d;
    d.fun();
    d.fun2();
    return 0;
}