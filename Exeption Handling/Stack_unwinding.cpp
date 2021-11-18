#include <iostream>
using namespace std;
void fun1()
{
    cout << "sahil" << endl;
    throw 100;
    cout << "arm" << endl;
}
void fun2()
{
    cout << "aal" << endl;
    fun1();
    cout << "fun" << endl;
}
void fun3()
{
    cout << "sahil" << endl;
    try
    {
        fun2();
    }
    catch (int i)
    {
        cout << "caught in fun3" << endl; //after throw this will work directly
    }                                     //because both fun1 and fun2 are not having catch
    cout << "arm" << endl;
}
int main()
{
    cout << "started" << endl;
    fun3();
    cout << "ended" << endl;
    return 0;
}
