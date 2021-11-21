#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    string Name;
    int Roll;
    string Branch;

    friend ofstream &operator<<(ofstream &ofs, Student &S);
};

ofstream &operator<<(ofstream &ofs, Student &S)
{
    ofs << S.Name << endl;
    ofs << S.Roll << endl;
    ofs << S.Branch << endl;
    return ofs;
}

int main()
{
    ofstream ofs("Student.txt", ios::trunc);

    Student S1;
    S1.Name = "Sahil";
    S1.Roll = 121;
    S1.Branch = "CSE";

    ofs << S1;
    ofs.close();
    return 0;
}