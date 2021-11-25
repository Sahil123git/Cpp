#include<iostream>
using namespace std;

class Base
{
public:
    virtual void fun() = 0;   //This is abstract

    void fun2()              //This is concrete
    {
        cout<<"DERIVED BASE fun 2"<<endl;
    }
};

class Derived :public Base
{
public:
    void fun()
    {
        cout<<"DERIVED fun"<<endl;
    }

};
int main()
{
    Derived d;
    d.fun();
    d.fun2();
    return 0;
}