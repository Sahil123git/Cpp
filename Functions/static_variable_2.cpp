#include <iostream>
using namespace std;
void fun()
{
    static int a = 2;
    int v = 0;
    v++;
    a = v + a;
    a++;
    cout << "a = " << a << " "
         << "v = " << v << " " << endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}