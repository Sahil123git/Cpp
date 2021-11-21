#include<iostream>
using namespace std;

class Base
{
public:
    static int price;

    Base()
    {
        price++;
    }
};
int Base::price = 2;

int main()
{
    cout<<Base::price<<endl;
    Base b;
    cout<<b.price<<endl;
    return 0;
}