#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b<<" in function"<<endl;
    return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}