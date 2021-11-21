#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream var("My.txt");
    string Name, Branch;
    int roll;
    // string Branch;

    if (var.is_open())
    {
        cout << "File Opened" << endl;
    }
    else
    {
        cout << "File not Opened" << endl;
    }

    var >> Name;
    var >> roll;
    var >> Branch;
    var.close();

    cout << "Name -> " << Name << endl;
    cout << "Roll No -> " << roll << endl;
    cout << "Branch -> " << Branch << endl;

    return 0;
}
