#include<iostream>
using namespace std;
class Derived;
class Base
{
public:
    int a = 10;
protected:
    int b = 4;
private:
    int c = 2;

    friend Derived;
};

class Derived
{ 
public:
    Base ba;
    void fun()
    {
        ba.a = 1;
        ba.b = 2;
        ba.c = 3;
        cout<<"In derived function -> "<< ba.a<<" "<<ba.b<<" "<<ba.c<<endl;
    }
};

int main()
{
    Derived Ba;
    Base Bas;
    Ba.fun();
    cout<<Bas.a<<" ";
    return 0;
}