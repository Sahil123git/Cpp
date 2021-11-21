#include <iostream>
using namespace std;
class Customer
{
public:
    int Cust_Id;
    string CName;
    int CBalance;
    static int count;
    void Info(int Cust_Id, string CName, int CBalance)
    {
        this->Cust_Id = Cust_Id;
        this->CName = CName;
        this->CBalance = CBalance;
    }
    void disp()
    {
        cout << count++ << " " << CName << " " << Cust_Id << " " << CBalance << " " << endl;
    }
};
int Customer::count = 0;
int main()
{
    Customer b[5];
    string name;
    int bal[3];
    bal[0] = 123;
    bal[1] = 455;
    bal[2] = 78;
    for (int i = 0; i < 3; i++)
    {
        static int id = 1200;
        id++;
        getline(cin, name);
        b[i].Info(id, name, bal[i]);
        b[i].disp();
    }
    return 0;
}