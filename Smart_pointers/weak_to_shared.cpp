#include <iostream>
#include <memory>
#include <mutex>
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
    weak_ptr<test> ptr;
    {
        shared_ptr<test> ptr2 = make_shared<test>(10);
        ptr = ptr2;
        // shared_ptr<test> ptr3 = lock(ptr);
        cout << ptr.use_count() << " " << ptr2.use_count() << endl; //here for both it will give 1 because weak has no ownership(reference)
    }                                                               //**destructor will get call immediately after this curly braise ends because we are using weak_pointer**

    cout
        << "Mains ends" << endl;
    return 0;
}