#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int add(int a, int b, int c)
{
    int d;
    d = a + b + c;
    return d;
}

float add(float x, float y)
{
    float z;
    z = x + y;
    return z;
}
int main()
{
    int a, b, c;
    float x, y;
    cin >> a >> b >> c;
    cin >> x >> y;

    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;

    cout << add(x, y);
    return 0;
}