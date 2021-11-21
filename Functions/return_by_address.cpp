#include <iostream>
using namespace std;

int *fun()
{
    int *p = new int[5];
    cout << p << " " << endl;
    for (int i = 0; i < 5; i++)
    {
        p[i] = 5 * i;
        cout << p[i] << " ";
    }
    cout << endl;
    cout << p << endl;
    return p;
}
int main()
{
    int *q = fun();
    //  cout << fun() << endl;
    // cout << q[3] << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl<< q;
    return 0;
}