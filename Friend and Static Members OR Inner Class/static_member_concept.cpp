#include <iostream>
using namespace std;

class Base
{
public:
    int x, y = 0;
    static int count;
    Base()
    {
        x = 10; //other than initialization and decleration  every thing should be inside a function
        y = y + 5;
        count++; // can do dry to get more abt static and normal variable
    }
};
int Base::count = 0;

int main()
{
    Base b; //for both b and c data members there will be garbage value in starting
    Base c; //but count value in starting will be 0 only get updated and increase
    cout << b.count << endl;
    cout << c.count << endl;
    cout << c.x << " " << b.y << " " << c.y << endl;
    cout << Base::count << endl;
    b.count = 5;
    cout << c.count;
    return 0;
}