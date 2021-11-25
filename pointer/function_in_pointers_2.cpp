#include <iostream>
using namespace std;
int (*fptr)(int, int);
int max(int x, int y)
{
    int a;
    a = x > y ? x : y;
    return a;
}
int min(int x, int y)
{
    int a;
    a = x < y ? x : y;
    return a;
}
int sum(int x, int y)
{
    int a;
    a = x + y;
    return a;
}
int subtract(int x, int y)
{
    int a;
    a = x - y;
    return a;
}

int main()
{
    
    int b, a, c, d;
    int x, y;

    cin >> x >> y;

    fptr = max;
    b = (*fptr)(x, y);
    cout << "greatest -> " << b << endl;

    fptr = min;
    a = (*fptr)(x, y);
    cout << "smallest -> " << a << endl;

    fptr = sum;
    c = (*fptr)(x, y);
    cout <<"sum -> "<< c << endl;

    fptr = subtract;
    d = (*fptr)(x, y);
    cout << "subtract -> "<<d << endl;

    return 0;
}