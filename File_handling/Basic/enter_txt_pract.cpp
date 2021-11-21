#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    char ch;
    string Name, read;
    new_file.open("user1.txt", ios::out);
    getline(cin, Name);
    new_file << Name;
    new_file.close();

    fstream new_f;
    new_f.open("user1.txt", ios::in);
    while (1)
    {
        new_f >> ch;
        if (new_f.eof())
            break;
        cout << ch;
    }
    
    new_f.close();
}