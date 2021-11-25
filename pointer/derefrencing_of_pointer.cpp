#include <iostream>
using namespace std;
int main()
{
    int Arr[5] = {2, 4, 6, 8, 10};
    int *p;
    p = &Arr[0];
    cout << p << endl;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
    cout << p << endl;
    return 0;
}