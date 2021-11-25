#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    str.append(" world");
    cout << str << endl;
    return 0;
}