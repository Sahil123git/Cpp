#include <iostream>
using namespace std;

class Base
{
public:
    virtual void func() //https://www.geeksforgeeks.org/override-keyword-c/
    {
        cout << "I am in base" << endl;
    }
};

class derived : public Base
{
public:
    void func() override //This will chk whether the base is getting
    {                    //overridded or not
        cout << "I am in derived class" << endl;
    }
};

int main()
{
    Base *ptr = new derived();
    ptr->func(); //use virtual with base class ptr and derived class obj
    cout << "Compiled successfully" << endl;
    return 0;
}
