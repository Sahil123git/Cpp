#include <iostream>
using namespace std;
int main()
{
    int i;
    int *p = &i;
    int *q = p; //pointing to i address through p
    cin >> i;

    cout << i << " " << *p << " " << *q << endl;
    (*q)++;
    cout << i << " " << *p << endl;
    (*p)++;
    cout << i << " " << *q;
    return 0;
}