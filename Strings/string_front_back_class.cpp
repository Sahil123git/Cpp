#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;

    getline(cin, str);
    
    cout << str.front() << endl;
    cout << str.back() << endl;
    return 0;
}