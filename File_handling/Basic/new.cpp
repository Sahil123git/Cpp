#include <iostream>
#include <fstream> // this is the library
#include <string>
using namespace std;

int main()
{

    fstream my_file; // nameOfClass obj

    my_file.open("my_file.txt", ios::out); // open is used to open a file

    if (!my_file)
    {
        cout << "file is not created";
    }
    else
    {
        cout << "File is created" << endl;

        string name, roll_number, college;
        cout << "Enter the text" << endl;
        getline(cin, name);
        getline(cin, roll_number);
        getline(cin, college);
        my_file << name << " " << roll_number << " " << college;

        my_file.close();
    }
}