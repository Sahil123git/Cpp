#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;

    getline(cin,str);
    str.pop_back();
    
    cout<<str;
    return 0;
}