#include <iostream>
#include <cstdarg>
using namespace std;

int sum_fun(int n, ...)
{
    va_list start_el;
    va_start(start_el, n);
    int x, sum = 0;
    for (int i = 0; i < n; i++)
    {
        x = va_arg(start_el, int);
        sum = sum + x;
    }
    va_end(start_el);
    return sum;
}
int main()
{
    cout << sum_fun(3, 2, 3, 4) << endl;
    cout << sum_fun(7, 3, 4, 5, 6, 7, 8, 9) << endl;
}