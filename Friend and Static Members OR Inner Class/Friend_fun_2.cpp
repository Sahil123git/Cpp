#include <iostream>
using namespace std;
class Base
{
    int a = 9, b;

public:
    int c;
    friend void derived(Base);
};

int main()
{
    Base b1;
    derived(b1);
    return 0;
}
void derived(Base b2)
{
    b2.a = 4;
    cout << b2.a;
}