#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    *ptr = *ptr * 3;
    cout << a <<" "<<*ptr;

    return 0;
}
