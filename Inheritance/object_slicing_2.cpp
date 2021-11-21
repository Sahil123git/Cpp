#include <iostream>
using namespace std;
class Base
{
public:
    virtual void getname(int val)
    {
        cout << "Base";
    }
};

class Derived : public Base
{
public:
    void getname(int val)
    {
        cout << "Derived";
    }
};

int main()
{
    Derived d1;
    Base &b1(d1); //Using this reference we can see now we will get output as Derived
    b1.getname(1);
    return 0;
}