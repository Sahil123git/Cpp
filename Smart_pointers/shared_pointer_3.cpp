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
};
int main()
{
    cout << "Main begins" << endl;
    shared_ptr<test> ptr; //this will not call test constructpr
    {
        shared_ptr<test> ptr2 = make_shared<test>(10); //this will make call
        // ptr = ptr2;//we have commented this now, ptr2 will get also destructed as curly braises ends
    }
    cout << "Mains ends" << endl;
    return 0;
}