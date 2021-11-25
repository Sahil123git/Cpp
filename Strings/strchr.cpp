#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100], str1;
    cin.getline(str, 100);
    cin >> str1;
    if (strchr(str, str1) == NULL)
    {
        cout << "NULL";
    }
    else
    {
    cout << strchr(str, str1);
    }
    return 0;
}
