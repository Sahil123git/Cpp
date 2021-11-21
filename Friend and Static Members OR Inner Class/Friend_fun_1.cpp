#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c = 14;

    friend void fun();
};
void fun()
{
    Base B;
    B.a = 10;
    B.b = 6;
    B.c = 2;
    cout << B.a << " " << B.b << " " << B.c << " <- values in fun function" << endl;
}
int main()
{
    Base Bc;
    fun();
    cout << Bc.c << endl;
    return 0;
}