#include <iostream>
#include <cmath>
using namespace std;
int power(int a, int b)
{
    int c;
    c = pow(a, b);
    return c;
}
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = power(a, b);
    cout << c;
    return 0;
}