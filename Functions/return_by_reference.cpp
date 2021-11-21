#include <iostream>
using namespace std;
int &fun(int &x)
{
    cout << x << endl;
    return x;
}
int main()
{
    int a = 10;
    fun(a) = 50;
    fun(a) ;
    cout << a << endl;
    return 0;
}