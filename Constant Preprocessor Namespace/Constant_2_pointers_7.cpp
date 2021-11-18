#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    const int *const ptr = &a; //this is constant pointer to a integer const
    a++;
    // ++*ptr;  //we can't do this

    cout << a << " " << *ptr;
    return 0;
}