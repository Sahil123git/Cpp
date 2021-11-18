#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *const ptr = &a; //this means pointer is constant of type integer pointer
    a++;
    ++*ptr;
    // int b = 9;
    // ptr = &b; //we cannot change pointer to point to some another data member when  pointer is const itself

    cout << a << " " << *ptr;
    return 0;
}