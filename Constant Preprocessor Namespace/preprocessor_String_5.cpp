#include <iostream>
using namespace std;
#define str(x) #x
int main()
{
    cout << str(hello);

    string s;
    s = str(world);
    cout <<" "<< s;

    return 0;
}