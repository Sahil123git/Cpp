#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20], str1[20];
    // cin.getline(str, 20);
    cin.getline(str1,20);
    strncpy(str, str1,2);
    cout << str;
    return 0;
}