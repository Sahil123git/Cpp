#include <iostream>
#include <string>
using namespace std;
int main()
{
    int pallin = 1;
    string str;
    getline(cin, str);
    for (int i = 0, j = str.size() - 1; i <= j; i++, j--)
    {
        if (str[i] == str[j] || str[i] == str[j] + 32 || str[i] == str[j] - 32)
        {
            pallin = 1;
        }
        else
        {
            pallin = 0;
            break;
        }
    }
    if (pallin == 1)
    {
        cout << "string is pallindrome " << endl;
    }
    else
    {
        cout << "string is not pallindrome" << endl;
        
    }
    return 0;
}