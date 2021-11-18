#include <iostream>
using namespace std;
int main()
{
    const int a = 5;
    const int *ptr = &a;
    //a++;
    cout << a << " " << *ptr;
    return 0;
}