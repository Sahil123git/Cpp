#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream var;
    var.open("My.txt");

    string Name, Branch;
    int roll;

    if (!var.is_open())
    {
        cout << "File not Opened" << endl;
    }
    else
    {
        cout << "File Opened" << endl;
    }

    var >> Name >> roll >> Branch;

    // if (var.eof())
    // {
    //     cout << "Opened" << endl;
    // }
    // else
    // {
    //     cout << "not opened" << endl;
    // }
    var.close();

    cout << "Name -> " << Name << endl;
    cout << "Roll No -> " << roll << endl;
    cout << "Branch -> " << Branch ;

    return 0;
}
