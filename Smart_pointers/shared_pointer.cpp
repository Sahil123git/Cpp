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
        // shared_ptr<test> ptr(new test(10));         //we can use both
        shared_ptr<test> ptr = make_shared<test>(10); //but this one is advisable to use
        shared_ptr<test> ptr2 = ptr;                  //now this will make ptr and ptr2 to point on one class
        ptr2->fun();                                  //after successful working of this fun() destructor will be called automatically
        cout << ptr.use_count() << endl;//for counting reference
        cout << ptr2.use_count() << endl; //output will be 2 because there are 2 pointers which are pointing on class
    }
    cout << "Mains ends";
    return 0;
}