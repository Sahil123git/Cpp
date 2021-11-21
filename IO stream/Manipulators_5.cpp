#include <iostream>
// #include <iomanip>
using namespace std;
int main()
{
    int c;
    c = 10;
    bool a, f;
    f = true;
    if (c == 1)
    {
        a = true;
    }
    else
    {
        a = false;
    }
    cout << f << " " << boolalpha << f << endl;
    cout << boolalpha << a << endl;
    return 0;
}
