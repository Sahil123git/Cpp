#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str.find_first_of("g") << endl;
    cout << str.find_first_of("mo") << endl;
    cout << str.find_last_of("r") << endl;
    cout << str.find_first_of("r",4) << endl;
    return 0;
}
