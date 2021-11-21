#include <iostream>
using namespace std;

int fun(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + fun(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    // n = 3;
    int s;
    s = fun(n);
    cout << s;
    return 0;
}