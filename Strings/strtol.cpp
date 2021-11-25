#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    char str1[100];
    cin.getline(str, 100);
    cin.getline(str1, 100);
    long int x = strtol(str, NULL,10);
    float y = strtof(str1, NULL);
    cout << x << " " << y<<endl;
    x = x + 10;
    y = y + 10;
    cout<< x <<" "<<y;
    return 0;
}
