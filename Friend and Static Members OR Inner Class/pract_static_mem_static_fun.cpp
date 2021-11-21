#include <iostream>
using namespace std;
class Base
{
private:
    int a;
    int b;

public:
    static int count;
    Base()
    {
        count++;
    }
    static void getcount()
    {
        cout << ++count;
    }
};
int Base::count = 0;
int main()
{
    Base b, c;
    cout << c.count;
    cout << b.count;
    Base::getcount();
    return 0;
}