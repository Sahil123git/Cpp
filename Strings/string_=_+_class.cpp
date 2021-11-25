#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str1, str2;

    getline(cin, str);
    getline(cin, str1);
    getline(cin, str2);

    str = str1 + str2 +" rock";
    cout << str;
    return 0;
}