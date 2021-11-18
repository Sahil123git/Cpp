#include<iostream>
using namespace std;

int Division(int, int);

int main()
{
    int a = 10, b = 0, c;

    try
    {
        c = Division(a, b);
        cout << c << endl;
    }
    catch (float e)
    {
        cout<<"Dividion is not possible because of Error "<< e << endl;
    }
    cout<<"Bye";
    return 0;
}

int Division(int x, int y)
{
    if (y == 0)
    {
        throw 1.21f;
    }
    else
    {
        return x/y;
    }
}