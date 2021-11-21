#include <iostream>
using namespace std;

class percentage
{
private:
    int classs, roll_no;
    string name;
    int phy_marks, chem_marks, math_marks;

public:
    percentage(int cla, int roll, int p_marks, int m_marks, int c_marks, string n)
    {
        classs = cla;
        roll_no = roll;
        phy_marks = p_marks;
        chem_marks = c_marks;
        math_marks = m_marks;
        name = n;
    }
    int total()
    {
        return phy_marks + chem_marks + math_marks;
    }
    char grade()
    {

        float avg = total() / 3;
        if (avg > 80)
        {
            return 'A';
        }
        else if (avg > 60 && avg <= 80)
        {
            return 'B';
        }
        else if (avg > 40 && avg <= 60)
        {
            return 'C';
        }
        else
        {
            return 'D';
        }
    }
};
int main()
{
    string n;
    cin >> n;
    int cla, roll, p_m, c_m, m_m;
    cin >> cla >> roll >> p_m >> c_m >> m_m;

    percentage R(cla, roll, p_m, c_m, m_m, n);

    cout << R.total() << endl;
    cout << R.grade();

    return 0;
}