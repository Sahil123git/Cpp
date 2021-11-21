#include <iostream>
#include <fstream>
using namespace std;
int main()            //https://www.youtube.com/watch?v=m1doZoZyAw0  (tellp and tellg)
{                     //https://www.youtube.com/watch?v=UZ9BaKkmKME  (seekg and seekp)
    fstream my_files; //Notes -> https://www.quora.com/What-are-seekg-seekp-tellg-and-tellp-functions
    my_files.open("my_files_1.txt", ios::in | ios::out | ios::trunc);
    my_files << "created file";
    cout << my_files.tellg() << endl; //this is at 12 because text in file tool it to 12 posn
    my_files.seekg(3);                //now this will take it to 3 posn
    cout << my_files.tellg() << endl;

    my_files.seekg(6, ios::beg);
    cout << my_files.tellg() << " ";
    my_files.seekg(6, ios::cur); //this 3 will tell the dirn of the ptr to start from beg,end,mid
    cout << my_files.tellg() << " ";
    my_files.seekg(-9, ios::end); //this will take the ptr back to (-9)
    cout << my_files.tellg() << endl;

    char A[19];
    my_files.read(A, 9); //this is for printing the read file
    A[9] = 0;
    cout << A;
    return 0;
}