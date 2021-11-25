#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int *arr = new int[n]; //dynamically created array
    for (int i = 0; i < n; i++)
    {
        cin >> i[arr];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int *ptr;
    ptr = new int; //dynamically created single memory
    *ptr = 4;           // use star to access that
    cout << *ptr;
    return 0;
}