#include <iostream>
using namespace std;
class Base
{
public:
    int a, b;
    Base(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
    Base operator++() //for inc value by 1
    {
        // Base b; for this there should be default constructor or non paremtrized const
        a = ++a;
        b = ++b;
        return Base(a, b);
    }
    Base operator--() //for dec value by 1
    {
        a = --a;
        b = --b;
        return Base(a, b);
    }
    // Base operator-()//for changing the sign from -ve to +ve
    // {
    //     a = -a;
    //     b = -b;
    //     return Base(a, b);
    // }
};
Base operator-(Base &f) //we overload operator outside the class but for this all data members should be public
{                       //and unary operator should hace one operator
    f.a = -f.a;
    f.b = -f.b;
    return Base(f.a, f.b);
}
int main()
{
    Base B1(-10, -11), B2(5, 4);
    B1.display();
    ++B1;
    B1.display();
    -B2;
    B2.display();
    --B2;
    B2.display();
}