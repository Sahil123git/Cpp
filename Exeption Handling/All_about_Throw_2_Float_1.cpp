#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;

    try
    {
        if (b == 0)
        {
            throw float(2.523);
        }
        else
        {
            c = a/b;
            cout << c << endl;
        }

    }
    catch (float e)
    {
        cout<<"Dividion is not possible because of Error "<< e << endl;
    }
    cout<<"Bye";
    return 0;
}

