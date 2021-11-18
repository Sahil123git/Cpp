#include <iostream>
using namespace std;
int main()
{
    // const int a = 5;  This is wrong we can't store address of const identifiers to the pointers
    int a = 5; //we can use this
    int *ptr;
    ptr = &a;
    a++;
    (*ptr)++;  //We can't use *ptr++ add brackets like (*ptr)++
    cout << a << " " << *ptr;
    return 0;
}