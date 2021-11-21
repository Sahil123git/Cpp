#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    int *p;

    Base(int x)
    {
        a = x;
        p = new int[a];
        cout << a << endl;
    }
    Base(Base &s)
    {
        a = s.a;
        p = new int; //to create diff space
        *p = *(s.p); //and put p value to the new created space
        cout << a << " " << *p;
    }
};
int main()
{
    Base s(5);
    Base s2(s);
    return 0;
}
