#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    string Name;
    int Roll;
    string Branch;

public:
    Student()
    {
    }
    Student(string N, int R, string B)
    {
        Name = N;
        Roll = R;
        Branch = B;
    }
    friend ofstream &operator<<(ofstream &ofs, Student S);
    friend ifstream &operator>>(ifstream &ifs, Student &S);
    friend ostream &operator<<(ostream &os, Student &S);
};

ofstream &operator<<(ofstream &ofs, Student S)
{
    ofs << S.Name << endl;
    ofs << S.Roll << endl;
    ofs << S.Branch << endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &S)
{
    ifs >> S.Name;
    ifs >> S.Roll;
    ifs >> S.Branch;
    return ifs;
}

ostream &operator<<(ostream &os, Student &S)
{
    os << "Name -> " << S.Name << endl;
    os << "Branch -> " << S.Branch << endl;
    os << "Roll -> " << S.Roll << endl;
    return os;
}

int main()
{
    ofstream ofs("Student_2.txt", ios::trunc);
    Student S1("Ram", 123, "CSE");

    ofs << S1;
    ofs.close();

    Student S2;
    ifstream ifs("Student_2.txt");
    ifs >> S2;
    cout << S2;
    ifs.close();
    return 0;
}