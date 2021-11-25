#include <iostream>
using namespace std;
class A
{
    int *p;

public:
    // default constructor
    A()
    {
        // allocating memory at run time
        p = new int;
        *p = 0;
    }
    // parameterized constructor
    A(int x)
    {
        p = new int;
        *p = x;
    }
    void display()
    {
        cout << *p << endl;
    }
};
int main()
{
    // default constructor would be called
    A obj1 = A();
    obj1.display();

    // parameterized constructor would be called
    A obj2 = A(7);
    obj2.display();
}
