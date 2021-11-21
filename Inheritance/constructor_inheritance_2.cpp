#include <iostream>
using namespace std;
class Inheritance
{
public:
    Inheritance()
    {
        cout << "Base" << endl;
    }
    Inheritance(int x)
    {
        cout << "Param_Base" << x << endl;
    }
};
class Derived_Inheritance : public Inheritance
{
public:
    Derived_Inheritance()
    {
        cout << "derived" << endl;
    }
    Derived_Inheritance(int a)
    {
        cout << "param_Derived " << a << endl;
    }
};
int main()
{
    Derived_Inheritance d(10);
    return 0;
}