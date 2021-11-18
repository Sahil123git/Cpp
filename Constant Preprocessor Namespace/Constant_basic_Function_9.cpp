#include <iostream>
using namespace std;

void fun(const int &x, int &y)
{
    cout << x << " " << y << endl;
    // x = x + 4;  we can't inc x now because it's const
}
int main()
{
    int a = 10, b = 5;
    fun(a, b);
    cout << a << " " << b;
    return 0;
}
