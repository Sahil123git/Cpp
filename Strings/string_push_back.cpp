#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    str.push_back('a');
    cout << str;
    return 0;

}