#include <iostream>
using namespace std;
int main()
{
    int x = 20, *y, *z;
    cout << &x << endl;
    // Assume address of x is 500 and
    // integer is 4 byte size
    y = &x;
    z = y;
    (*y)++;
    *z = *z + 1;
    x++;
    cout << x << " " << &x << " " << *y <<" "<< *z << endl;
    return 0;
}
