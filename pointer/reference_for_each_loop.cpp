#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4};
    for (int &x : a)
    {
        cout << ++x << endl;
    }
    return 0;
}