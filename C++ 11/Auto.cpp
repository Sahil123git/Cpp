#include <iostream>
using namespace std;
float fun()
{
    return 3.45f;
}

int main()
{
    auto c = 2.3f + 'c' + 213.4 + 5; //concept 1
    cout << c << endl;

    double i = 2.34; //concept 1.2
    int a = 3.4;
    auto t = 2.34f + a + i;
    cout << t << endl;

    auto var = fun(); //concept 3
    cout << var;

    return 0;
}