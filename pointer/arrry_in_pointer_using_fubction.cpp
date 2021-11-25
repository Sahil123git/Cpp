#include <iostream>
using namespace std;
int main()
{
    int i, arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = &arr[0];
    for (i = 0; i < 5; i++)
    {
        cout << (arr + i) << " ";
        cout << *(ptr + i) << " ";
        cout << ptr[i] << " ";
    }
    return 0;
}