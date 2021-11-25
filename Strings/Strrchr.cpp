#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100], str1;
    cin.getline(str, 100);
    cin >> str1;
    if (strrchr(str, str1) == NULL)
    {
        cout << "NULL";
    }
    else
    {
    cout << strrchr(str, str1);
    }
    return 0;
}
