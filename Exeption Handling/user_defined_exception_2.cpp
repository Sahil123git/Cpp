#include <iostream>
using namespace std;

int average(int arr[], int n)
{
    if (n == 0) //we have to use class to get that 2 options because this throw will not
    {           //be able to throw to 2  diff catchs
        throw 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    try
    {
        int avg = average(arr, n);
        cout << avg;
    }
    catch (int)
    {
        cout << "Array size is 0";
    }

    catch (...)
    {
        cout << "Array ";
    }
    return 0;
}
