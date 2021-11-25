#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str2;
    char str1[20], str3[20];

    getline(cin, str);
    getline(cin, str2);

    str.copy(str1, str.length());
    cout << str1<<" ";

    str2.copy(str3, 3);
    str3[3]='\0';
    cout << str3;

    return 0;
}