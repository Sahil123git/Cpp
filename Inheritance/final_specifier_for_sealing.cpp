#include <iostream> //https://www.geeksforgeeks.org/c-final-specifier/#:~:text=final%20specifier%20in%20C%2B%2B%2011%20can%20also%20be%20used%20to,used%20as%20base%20class%2Fstruct.
using namespace std;
class Base
{
public:
    virtual void fun() final
    {
        cout << "Base" << endl;
    }
};
class Derived : public Base
{
public:
    void fun() //this is giving error because we are using final keyword in base class
    {          //which will prevent to override base class
        cout << "Derived" << endl;
    }
};
int main()
{
    Derived B1; //we can use base class pointer and derived class object because
    B1.fun();   //virtual mostly uses with base class pointer and derived class obj
    return 0;   //because there only base print instead of derived
}