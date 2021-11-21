#include <iostream>
using namespace std;
int g = 5;
void fun()
{
    g++;
    int g;
    g = 10;
    {
        int g;
        g = 7;
        g++;
        cout << g << " ";
    }
    cout << g << endl;
}
int main()
{
    fun();
    cout << g;
    return 0;
}