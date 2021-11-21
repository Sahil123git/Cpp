#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c;
    cout << setw(15) << setfill('*') << 99 << 97 << setfill('*') << "w" << endl;
    cout << setw(15) << setfill('*') << showpos << 99 << 97 << setfill('*') << setw(9) << "w" << endl;
    cout << setw(15) << setfill('*') << showpos << 99 << 97 << setfill('*') << setw(9) << endl; //we need some ssvariable to add
    return 0;
}
