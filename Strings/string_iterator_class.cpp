#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    string str;
    getline(cin, str);
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] < 96 && str[i] != ' ')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;
    for (it = str.begin(); it < str.end(); it++)
    {
        *it = *it - 32;
    }
    cout << str;
    return 0;
}