#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str.max_size() << endl;
    return 0;
}