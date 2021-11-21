#include <iostream>
using namespace std;
template <class temp>

temp maxi(temp a = 0, temp b = 0, temp c = 0)
{
    return (a > b && a > c) ? a : (b > c ? b : c);
}
int main()
{
    int a, b, c;
    float i, j, k;
    cin >> a >> b >> c;
    cin >> i >> j;
    cout << maxi(a, b, c) << endl;
    cout << maxi(i, j) << endl;
    cout << maxi(j) << endl;
    return 0;
}