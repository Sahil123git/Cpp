#include <iostream>
#include <string>
using namespace std;
int main()
{
    int alpha_count = 0, num_count = 0, spec_count = 0;
    string str;
    getline(cin, str);
    int store = (int)str.find('@');
    for (int i = 0; i < store; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            alpha_count++;
        }
        else if (str[i] == '_' || str[i] == '.')
        {
            spec_count++;
        }

        else if ((str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'))
        {
            num_count++;
        }
    }
    if (alpha_count >= 4 && spec_count >= 1 && num_count >= 1)
    {
        for (int i = 0; i < store; i++)
        {
            cout << str[i];
        }
        cout << endl;
        cout << "string is correct";
    }
    else
    {
        cout << "try again";
    }
    return 0;
}