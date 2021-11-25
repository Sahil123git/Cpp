#include <iostream>
using namespace std;
int main()
{
    char a = 'b';
    char *p = &a;
    cout << a << endl;
    a++;
    cout << a << endl;
    (*p)++;
    cout << *p << endl;
    cout << p << endl;
    return 0;
}
