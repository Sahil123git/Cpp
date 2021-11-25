#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str.find("hil") << endl;
    cout << str.find("l") << endl;
    cout << str.find("lf") << endl;
    cout << str.find("li") << endl;
    cout << str.rfind("a") << endl;
    return 0;
}
