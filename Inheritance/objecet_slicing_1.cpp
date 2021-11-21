#include <iostream> ///https://www.youtube.com/watch?v=99xTGkdxAdc
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
    Base b1(d1);   //This is object slicing which is printing base class even using virtual
    b1.getname(1); //so use refernce to avoid hapening this
    return 0;
}