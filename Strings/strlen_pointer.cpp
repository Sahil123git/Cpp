#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *s;
    cout << "enter the semtecnce of which you want to find the length" << endl;
    cin.getline(s, 100);
    // cout << "enter the second sentence"<<endl;
    // cin.getline(str1, 100);
    cout << strlen(s) << endl;
    // cout << strlen(str1);
    return 0;
}