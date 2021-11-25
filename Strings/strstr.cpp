#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100], str1[100];
    cin.getline(str, 100);
    cin.getline(str1, 100);
    if (strstr(str, str1) == NULL)
    {
        cout << "NULL";
    }
    else
    {
        cout << strstr(str, str1);
    }

    // cout << strstr(str, str1) << endl;
    return 0;
}