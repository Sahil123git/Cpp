#include<iostream>
using namespace std;

class Base
{
public:
    int x, y;
    static int count;
    Base()
    {
        x = 10;
        y = 4;
        count++;
    }
};
int Base::count = 0;

int main()
{
    Base b, c;
    cout<<b.count<<endl;
    cout<<c.count<<endl;
    cout<<c.x<<" "<<b.y<<endl;
    cout<<Base::count<<endl;
    b.count=5;
    cout<<c.count;
    return 0;
}