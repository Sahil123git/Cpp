#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    str1.swap(str2);
    
    cout << str1 << " " << str2;
    return 0;
}