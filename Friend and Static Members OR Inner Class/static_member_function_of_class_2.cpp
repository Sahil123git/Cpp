#include<iostream>
using namespace std;

class Base
{
private:
    int x, y;
public:
    static int count;
    Base()
    {
        x = 10;
        y = 4;
        count++;
    }
    static int getcount()
    {
        //x = 5;        We can't use non static memmbers in static function of a class
        return count;
    }
};
int Base::count = 90;

int main()
{
    cout<<Base::getcount()<<endl;
    Base b, c;
    cout<<b.getcount()<<endl;
    cout<<Base::getcount()<<endl;
    cout<<c.count<<" "<<b.count<<endl;
    // cout<<b.x<<" "<<b.y;
    return 0;
}