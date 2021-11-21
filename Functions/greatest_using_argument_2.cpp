#include <iostream>
using namespace std;
// template <class temp>

float maxi(float a = 0, float b = 0, float c = 0)
{
    return (a > b && a > c) ? a : (b > c ? b : c);
}
int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    cout << maxi(a, b, c) << endl;
    cout << maxi(a, b) << endl;
    cout << maxi() << endl;
    return 0;
}