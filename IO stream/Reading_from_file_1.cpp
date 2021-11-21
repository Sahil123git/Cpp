#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream var("My.txt");
    string Name;
    int roll;
    string Branch;

    var >> Name;
    var >> roll;
    var >> Branch;
    var.close();

    cout << "Name -> " << Name << endl;
    cout << "Roll No -> " << roll << endl;
    cout << "Branch -> " << Branch << endl;

    return 0;
}
