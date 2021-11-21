#include <iostream>
using namespace std;
int g = 6;
void fun()
{
    int g = 10;
    {
        int g = 19;
        g++;
        cout << "global " << ::g << endl;
        cout << g << endl;
    }
    cout << g << endl;
    cout << "global " << ::g << endl;
}
int main()
{
    fun();
    g++;
    {
        int g = 30;
        cout << g << endl;
        cout << "global " << ::g << endl;
    }
    cout << "global " << g;
    return 0;
}
