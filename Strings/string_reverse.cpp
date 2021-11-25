#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string str;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
        count++;
    }
    cout << endl;
    cout << count << endl;
    for (int i = count - 1; i >= 0; i--)
    {
        cout << i << "->" << str[i] <<"  ";
    }
    return 0;
}