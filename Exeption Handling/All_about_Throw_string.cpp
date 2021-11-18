#include<iostream>
using namespace std;
int Divi(int, int);

int main()
{
    int a = 4, b = 0, c;
    try
    {
        c = Divi(a, b);
        cout << c << endl;
    }
    catch (string e)
    {
        cout<<"this is not valid "<< e << endl;
    }
    cout<<"bye";
    return 0;
}
int Divi(int a, int b)
{
    if (b==0)
    {
        throw string("Can't enter 0");
    }
    else
    {
        return a/b;
    }
}