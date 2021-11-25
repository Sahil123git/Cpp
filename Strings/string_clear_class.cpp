#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    str.clear();
    cout << str.length() << endl;
    return 0;
}