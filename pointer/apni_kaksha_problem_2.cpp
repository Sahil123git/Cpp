#include <iostream>
using namespace std;
int main()
{
    const int i = 20;
    const int *const ptr = &i;
    (*ptr)++;  //--
    int j = 5; //  |    errors
    ptr = &j; // -- 
    cout << i;
    return 0;
}