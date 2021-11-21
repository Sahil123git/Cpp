#include <iostream>
using namespace std;
class base
{
public:
    static int a;
    int c = 2;
    void base_1()
    {
        cout << a++ << endl;
        cout << c++ << endl;
    }
};
int base::a = 0;
int main()
{
    cout << base::a << "n" << endl;
    base b, c;
    b.base_1();
    // cout << c.base() << endl;// cant call constructors only can call functions
}