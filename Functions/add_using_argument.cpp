#include <iostream>
#include <iomanip>
using namespace std;
template <class temp>
temp argument(temp a, temp b = 0, temp c = 0)
{
    temp d;
    d = a + b + c;
    return d;
}
int main()
{
    int c, a, b;
    float i, j, k;
    cin >> i >> j >> k;
    cin >> a >> b >> c;

    cout << argument(a, b, c) << " " << endl;
    cout << fixed << setprecision(3) << argument(i, j, k) << endl;
    cout << fixed << setprecision(3) << argument(i, j) << endl;
    cout << fixed << setprecision(2) << argument(k);
    return 0;
}