#include <iostream>
#include <iomanip>
using namespace std;
template <class temp>
// temp add(temp a, temp b)
// {
//     return a + b;
// }
temp add(temp a, temp b)
{
    temp c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;
    float c, d;
    cin >> a >> b;
    cin >> c >> d;
    int f;
    float g;
    f = add(a, b);
    g = add(c, d);
    cout << f << " " << endl;
    cout << fixed << setprecision(2) << g;
    return 0;
}
