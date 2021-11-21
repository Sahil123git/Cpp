#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return 1;
    }
    else if (b > a && b > c)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;

    d = max(a, b, c);
    if(d == 1)
    {
        cout<<" a";
    }
    else if(d == 2)
    {
        cout<<" b";
    }
    else
    {
       cout<<" c";
    }
    
    return 0;
}
