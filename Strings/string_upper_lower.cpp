#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        cout << str[i];
    }
    return 0;
}