#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructor of Base" << endl;
    }
    ~Base()
    {
        cout << "Destructor of Base" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor of Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor of Derived" << endl;
    }
};
int main()
{
    Derived der;
    // Derived();
    return 0;
}
