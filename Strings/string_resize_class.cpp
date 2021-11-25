#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str.capacity() << endl;
    str.resize(60);
    cout << str.capacity();
    return 0;
}