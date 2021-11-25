#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str.length() << endl;
    str.clear();
    if (str.empty())
    {
        cout << "str is empty";
    }
    else
    {
        cout << str << "is not empty";
    }
    return 0;
}