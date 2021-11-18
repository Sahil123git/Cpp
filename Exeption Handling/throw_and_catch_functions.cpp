#include<iostream>
using namespace std;

int divi(int, int);

int main()
{
    int x =10, y=0, z;

    try
    {
        z = divi(x, y);
        cout << z << endl;
    }

    catch (int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye";
    return 0;
}

int divi(int a, int b)   //can't use div that creating error
{
    if (b == 0)
    {
        throw b;
    }
    else
    {
        return a/b;
    }
}
