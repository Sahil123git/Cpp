#include <iostream>
#include <fstream>
using namespace std;
int main()            //https://www.youtube.com/watch?v=UZ9BaKkmKME
{                     //tellp and tellg will only tell where the ptr is
    fstream my_files; //or can use ostream becaues we are only using seekp and tellp
    my_files.open("my_files_2.txt", ios::in | ios::out | ios::trunc);
    my_files << "hello world";
    cout << my_files.tellp() << endl;

    my_files.seekp(6, ios::beg); //this will move the ptr to 6 words forward
    cout << my_files.tellp() << " " << endl;

    char A[19];
    my_files.read(A, 5); //this is for printing the read file
    A[5] = '\0';
    cout << A;
    return 0;
}