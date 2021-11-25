#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str1;

    getline(cin, str);
    getline(cin, str1);
    str1[4] = 'p';

    cout << str.at(3) << endl;
    cout << str1 << endl;
    cout << str1[3];
    return 0;
}