#include <iostream>
#include "mul.h"
using namespace std;
inline int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a, b, c;
    cin >> a >> b;
    cout << add(a, b) << endl; //that add fun() will directly get copied here
    cout << mul(a, b);         //this will also work like this
    return 0;
}