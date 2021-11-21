#include <iostream>
using namespace std;
template <class Temp>

Temp Max(Temp a, Temp b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b;
    float c, d;

    cin >> a >> b;
    cin >> c >> d;

    cout << Max(a, b) << endl;
    cout << Max(c, d);

    return 0;
}