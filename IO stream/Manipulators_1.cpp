#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    float c, b;
    a = 123, b = 23.456789f, c = 2.42782;

    cout << hex << a << "\n";
    cout << oct << a << "\n";
    cout << dec << a << "\n";

    cout << scientific << b << "\n";
    cout << showpos << fixed << b << "\n";
    cout << fixed << setprecision(4) << c; //ioman ip headre file is for this
    return 0;
}
