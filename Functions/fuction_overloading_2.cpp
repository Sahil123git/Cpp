#include <iostream>
using namespace std;
int great(int c, int d)
{
    return c > d ? c : d;
}
float great(float c, float d)
{
    return c > d ? c : d;
}
float max(float c, int d)
{
    return c > d ? c : d;
}
int main()
{
    int a, b;
    float c ,d;

    cin >> a >> b;
    cin >> c >> d;

    cout << great(a, b) << endl;
    cout << great(c, d) << endl;
    cout << max(3.5, 7.5);

    return 0;
}