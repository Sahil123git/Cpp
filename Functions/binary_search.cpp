#include <iostream>
using namespace std;
int bin_search(int Arr[], int n, int key)
{
    int low, high, mid;
    low = 0, high = n - 1;
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (key == Arr[mid])
        {
            return 1;
            // break;
        }
        else if (key < Arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
    int c = bin_search(arr, n, key);
    if (c == 1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}