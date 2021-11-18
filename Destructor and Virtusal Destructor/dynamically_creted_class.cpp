#include <iostream>
using namespace std;
class base
{
public:
    int x, y;
    base(int a = 0, int b = 0)
    {
        x = a;
        y = b;
        cout << x << " " << y << " ";
        cout << "constructor called " << endl;
    }
    ~base()
    {
        cout << "Destructor called " << endl;
    }
};

int main()
{
    cout << "Main begin" << endl;
    {
        base *ptr = new base(10, 20);
        delete ptr;
    }

    cout << "Main ends" << endl;
    return 0;
}