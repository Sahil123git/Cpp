#include <iostream>
using namespace std;
int g = 5;   //glabal variable
void fun()
{
    int f = 4;  // local variable
    g = g + f;
}
int main()
{
    int a = 8;  //local variable
    g++;
    cout <<"g="<< g<< endl;
    fun();
    cout <<"g="<< g<<" "<<"a="<<a;
    return 0;
}