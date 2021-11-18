#include <iostream>
using namespace std;

class array_size_zero
{
};
class array_size_neg
{
};

int average(int arr[], int n)
{
    if (n == 0)
    {
        throw array_size_zero();
    }
    if (n < 0) //-ve wil not work maybe because of array size can't be -ve
    {
        throw array_size_neg();
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    // cout << n;
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
    catch (array_size_zero &e1)
    {
        cout << "Array size is 0";
    }
    catch (array_size_neg &e2)
    {
        cout << "Array size is -ve";
    }
    // catch (...)  not necessary because in this we are using if() not acc to data type
    // {
    //     cout << "Array ";
    // }
    return 0;
}
