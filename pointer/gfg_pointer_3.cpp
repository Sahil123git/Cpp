#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 15, i;
    for (i = 0; i < 1; i++)
    {
        int x = 20, y = 15; //for loop can't change the initialised value
    }
    int mul = x * y;
    cout << x << "*" << y << " = " << x * y << endl;
    return 0;
}
