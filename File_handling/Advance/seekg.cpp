#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile("hello.txt", ios::in | ios::out | ios::trunc);
    myFile << "Hello I am a student of LPU and I am in 2nd sem";
    myFile.seekg(5, ios::beg);//we can change this 5 to 0 acc to us
    char A[35];
    myFile.read(A, 34);
    A[34] = 0;
    cout << A;
    myFile.close();
}