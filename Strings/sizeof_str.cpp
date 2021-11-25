#include <iostream>
using namespace std;
int main()
{
    char str2[]="Sahil dussa";
    int c = sizeof(str2);   //(sizeof) calculate null character (\0) so it will allways add one more while calculating size
    cout << c << endl;
    return 0;
}