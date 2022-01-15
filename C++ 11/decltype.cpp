#include <iostream>
using namespace std;
int main()
{
    char var;
    var = 's';

    decltype(var) var2; //var2 will be of same data type  as of var
    var2 = 97;

    cout << var2;
    return 0;
}