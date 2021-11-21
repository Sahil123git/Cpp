#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new1_file.txt", ios::app);
    if (!new_file) //now this wiil show appended text
    {
        cout << "not created";
    }
    else
    {
        cout << "created";
        new_file << "hello file created";
        new_file << endl
                 << "Congratulation";
        new_file.close();
    }
}