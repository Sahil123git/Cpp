#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 4, 6, 8, 10, 12};

    int *ptr = &A[3];      //this means pointer(array) starts from 3(index no)
    cout << ptr[0] << " "; //so acc to that (index 0) will be 8
    cout << ptr[-2] << " ";
    cout << ptr[-3] << " "; //   and A[-2]will be 4
    cout << ptr[-4];        //for arr[-4] there will be garbage value because arr[-2] is the first
    return 0;
}