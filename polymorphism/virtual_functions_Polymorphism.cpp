#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void Function()
    {
        cout << "BASE CLASS" << endl;
    }
};

class Child : public Parent
{
public:
    void Function()
    {
        cout << "DERIVED CLASS" << endl;
    }
};

int main()
{
    Child C;
    Parent *ptr;
    ptr = &C;
    ptr->Function();
    return 0;
}