#include <iostream>
using namespace std;

float add(float a, float b)
{
    float c;
    c = a + b;
    return c;
}
int main()
{
    float a, b, c;
    cin >> a >> b;
    c = add(a, b);
    cout << c;
    return 0;
}