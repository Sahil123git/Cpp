#include <iostream>
using namespace std;

class Base
{
private:
    int roll_no;
    string name;

public:
    static int adm_no;

    Base(string n)
    {
        adm_no++;
        roll_no = adm_no;
        name = n;
    }
    void display()
    {
        cout << "name -> " << name << ", "
             << "rollno -> " << roll_no << endl;
    }
};
int Base::adm_no = 0;

int main()
{
    Base b1("john");
    Base b2("rocky");
    Base b3("Raju");
    Base b4("Rahul");
    Base b5("Ram");
    b1.display();
    b4.display();
    cout << "Total admissions -> " << Base::adm_no;
    return 0;
}