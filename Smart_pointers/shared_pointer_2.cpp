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
    shared_ptr<test> ptr1; //this will not make call because this is not yet made shared pointer
    {
        shared_ptr<test> ptr2 = make_shared<test>(10); //this will make call because this is shared ptr
        ptr1 = ptr2;                                   //now they are sharing
        ptr1->fun();
    }
    cout << "Mains ends" << endl; //destructor is in end because it will destroyed in last by ptr1
    return 0;
}