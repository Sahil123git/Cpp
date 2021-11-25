#include <iostream>
#include <memory>
using namespace std;

class test
{
    int x;

public:
    test(int a = 0)
    {
        x = a;
        cout << "Constructor" << endl;
    }
    ~test()
    {
        cout << "Destructor" << endl;
    }
    void fun()
    {
        cout << "Hello" << endl;
    }
};
int main()
{
    cout << "Main begins" << endl;
    {
        // unique_ptr<test> ptr(new test(10));         //we can use both
        unique_ptr<test> ptr = make_unique<test>(10); //but this one is advisable to use
        ptr->fun();                                   //after successful working of this fun() destructor will be called automatically
    }
    cout << "Mains ends";
    return 0;
}