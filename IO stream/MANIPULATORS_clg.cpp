#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> ws >> str;
    cout << str << endl;
    cout << setw(10) << "hi" << endl;
    cout << setw(10) << setfill('*') << "hi" << endl;
    cout << setbase(16) << 12 << setbase(10) << endl;
    long double dob;
    dob = 3.143535435;
    cout << fixed << setprecision(13) << dob << endl; //fixed will not let this to stop before gvn value
    return 0;
}