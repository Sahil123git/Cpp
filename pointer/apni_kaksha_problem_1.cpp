#include <iostream>
using namespace std;
int main()
{
    int a = 32, *ptr;
    ptr = &a;
    char ch = 'A', &cho = ch;

    cho = cho + a;
    *ptr = *ptr + ch;
    cout << ch <<" "<< a;
    return 0;
}
