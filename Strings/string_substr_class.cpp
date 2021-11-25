#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    cout << str.substr(3) << endl;
    cout << str.substr(3, 4) << endl;
    
    return 0;
}