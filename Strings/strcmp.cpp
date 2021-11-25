#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100],str1[100];
     cin.getline(str,100);
     cin.getline(str1,100);
     int  c = strcmp(str,str1);
     cout<<c;
     return 0;
}
