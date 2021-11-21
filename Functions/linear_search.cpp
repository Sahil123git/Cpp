#include <iostream>
using namespace std;
int lin_search(int Arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == Arr[i])
        {
            return 1;
            // break;
        }
    }
    return 0;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     cin >> key;
    int c = lin_search(arr, n, key);
    if (c == 1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
    
}