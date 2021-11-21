#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "hello" << endl;
    }
    Base(int a, int b = 3)
    {
        cout << (a + b);
    }
};
int main()
{
    int a, b;
    cin >> a ;
    Base B1;
    Base B(a);
}