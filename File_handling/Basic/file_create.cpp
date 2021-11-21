#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new_file.txt", ios::out);
    if (!new_file)
    {
        cout << "not created";
    }
    else
    {
        cout << "created";
        new_file << "hello file created";
        new_file << endl
                 << "Congratul";
        new_file.close();
    }
}