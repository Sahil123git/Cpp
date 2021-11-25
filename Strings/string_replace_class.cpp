#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str1;

    getline(cin, str);
    getline(cin, str1);

    str.replace(3, 4, "sahil");
    str1.replace(3, 4, "sahil", 3);

    cout << str << endl;
    cout << str1;

    return 0;
}