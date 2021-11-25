#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,str1;

    getline(cin, str);
    getline(cin,str1);

    str.insert(4,"are ");
    str1.insert(4, "area is your",3);  //(how you ) for output

    cout << str << endl;
    cout << str1 ;

    return 0;
}