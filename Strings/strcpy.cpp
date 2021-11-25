#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100]="", str1[100]="";
    cin.getline(str, 100);
    cin.getline(str1, 100);
    strcpy(str,str1);
    cout<<str;
    return 0;
}