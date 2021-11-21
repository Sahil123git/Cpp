#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream var;
    var.open("My.txt");
    string Name, Branch;
    int roll;
    // string Branch;

    if (!var)
    {
        cout << "File not Opened" << endl;
    }
    else
    {
        cout << "File Opened" << endl;
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
