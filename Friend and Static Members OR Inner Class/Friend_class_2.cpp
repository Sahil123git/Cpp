#include <iostream>
using namespace std;
class Derived;
class Base
{
    int a = 9, b = 8;

public:
    friend class Derived;
};
class Derived
{
public:
    void fun(Base b1)
    {
        b1.a = 12;
        cout << b1.a;
    }
};
int main()
{
    Base b1;
    Derived b2;
    b2.fun(b1);
    return 0;
}
