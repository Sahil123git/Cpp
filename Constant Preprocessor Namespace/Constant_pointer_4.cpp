#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    const int *ptr = &a; //This means pointer to integer const
    //  int const *ptr = &a;  can write like this also

    a = a + 4;
    //(*ptr)++;  //this is wrong can't do this as ptr is const
    cout << a << " " << *ptr;
    return 0;
}