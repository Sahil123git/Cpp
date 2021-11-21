#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream sdt("My.txt", ios::trunc);

    sdt << "Sahil" << endl;
    sdt << "123" << endl;
    sdt << "CSE" << endl;

    sdt.close();
    return 0;
}
