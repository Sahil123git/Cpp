#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    string str;
    string::reverse_iterator it;

    getline(cin, str);
    for (it = str.rbegin(); it != str.rend(); it++)
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
    for (i = str.size() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
    for (it = str.rbegin(); it != str.rend(); it++)
    {
        *it = *it - 32;
    }
    
    for (i = str.size() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}