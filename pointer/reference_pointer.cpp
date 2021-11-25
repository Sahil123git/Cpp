#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    cout << x << endl;
    x++;
    y++;
    cout << y << endl;
    cout << &x << " " << &y << endl;
    return 0;
}