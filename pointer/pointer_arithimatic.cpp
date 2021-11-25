#include <iostream>
using namespace std;

int main()
{
    int A[] = {2, 4, 6, 8, 10, 12};
    int *p = &A[0];
    int *q = &A[1], d;
    p++;
    cout << *p << endl;

    p = p + 3; // pointer will be pointing on 10

    cout << *p << " ";

    q++;
    cout << *q << endl;
    
    d = p - q;
    cout << d;
    return 0; // complete this statement to print 2
}