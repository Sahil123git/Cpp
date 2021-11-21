#include <iostream>
using namespace std;
class Employee
{
private:
    int no;
    string name;

public:
    Employee(int n, string s)
    {
        no = n;
        name = s;
    }
    int get_no()
    {
        return no;
    }
    string get_string()
    {
        return name;
    }
};

class Part_Time : public Employee
{
private:
    int sallary;

public:
    Part_Time(int n, string s, int sal) : Employee(n, s)
    {
        sallary = sal;
    }
    int get_sallary()
    {
        return sallary;
    }
};

class Part_Time_2 : public Employee
{
private:
    int wage;

public:
    Part_Time_2(int n, string s, int w) : Employee(n, s)
    {
        wage = w;
    }
    int get_wage()
    {
        return wage;
    }
};

int main()
{
    Part_Time P1(2, "Sahil", 50000);
    Part_Time_2 P2(3, "Rahil", 10000);
    cout << "Sallalry " << P1.get_string() << " is " << P1.get_sallary() << endl;
    cout << "Wage " << P2.get_string() << " is " << P2.get_wage();
    return 0;
}