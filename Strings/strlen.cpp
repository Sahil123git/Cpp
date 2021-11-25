#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100], str1[100],str2[]="Sahil dussa";
    cout << "enter the semtecnce of which you want to find the length" << endl;
    cin.getline(str, 100);
    cout << "enter the second sentence" << endl;
    cin.getline(str1, 100);
    int d = strlen(str1);
    int c = sizeof(str2);
    int e = strlen(str);
    cout << c << " " << e << endl;
    cout << d;
    return 0;
}