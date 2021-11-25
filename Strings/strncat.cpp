#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20], str1[20];
    cin.getline(str, 20);
    cin.getline(str1, 20);
    strncat(str, str1,3);
    cout << str << endl;
    return 0;
}