#include<iostream>
using namespace std;

class xception
{
};

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw  xception();
        }
        else
        {
            c = a/b;
            cout << c << endl;
        }

    }
    catch (xception e)
    {
        cout<<"Division by zero"<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
