#include <iostream>
#include <fstream> // this is library
#include <string>
using namespace std;

int main()
{
    fstream my_file;                       // nameOfClass obj
    my_file.open("new_file.txt", ios::in); // open is used to open a file
    if (!my_file)
    {
        cout << "file is not created";
    }
    else
    {
        cout << "File is created" << endl;
        int count = 0;
        char ch;
        while (1)
        {
            my_file >> ch; // >>
            if (my_file.eof())
                break;
            // count++;
            cout << ch;
        }
        // cout << endl
        //      << count;
        my_file.close();
    }
}
