#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int *p = num;

    p = &num[0];
    *p = 10;

    p++;
    *p = 20;

    p = &num[2];
    *p = 30;

    p = num + 3;
    *p = 40;

    p = num;
    *(p + 4) = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << ", ";
    }
    return 0;
}