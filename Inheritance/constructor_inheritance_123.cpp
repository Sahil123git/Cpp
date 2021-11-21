#include <iostream>
using namespace std;

class Inheritance_base
{
public:
    Inheritance_base()
    {
        cout << "Inheritance Base" << endl;
    }  
    Inheritance_base(int a)
    {
        cout << "Inheritance Base " << a << endl;
    }
};
class Inheritance_derived : public Inheritance_base
{
public:
    Inheritance_derived()
    {
        cout << "Inheritance Derived " << endl;
    }
    Inheritance_derived(int a)
    {
        cout << "Inheritance Derived " << a << endl;
    }
    Inheritance_derived(int x, int y) : Inheritance_base(x)
    {
        cout << "Inheritance Derived " << y << endl;
    }
};
int main()
{
    Inheritance_derived R1;
    Inheritance_derived R2(3);
    Inheritance_derived R(6, 7);
     return 0;
} 