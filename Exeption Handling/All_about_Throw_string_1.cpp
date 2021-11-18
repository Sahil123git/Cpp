#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    x=10, y=0;
    try
    {
        if (y==0)
        {
            throw string("not possible");
        }
        else
        {
            z=x/y;
            cout<<z<<endl;
        }
    }
    catch (string e)
    {
        cout << "Division by zero "<< e << endl;
    }
    cout <<"bye";
    return 0;
}