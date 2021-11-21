#include <iostream>
using namespace std;
class Deep
{
    int data1, data2, *p;

public:
    Deep()
    {
        p = new int;
    }
    Deep(Deep &d) //this is used in deep copy not in shallow copy
    {
        data1 = d.data1;
        data2 = d.data2;
        p = new int;
        *p = *(d.p);
    }
    void getdata(int a, int b, int c)
    {
        data1 = a;
        data2 = b;
        *p = c;
    }
    void showdata()
    {
        cout << data1 << " " << data2 << " " << *p << endl;
    }
    ~Deep()
    {
        delete p;
        p = NULL;
        cout << "bye"<<" ";
    }
};
int main()
{
    Deep ob1;
    ob1.getdata(1, 2, 3);
    ob1.showdata();
    Deep ob2 = ob1;
    ob2.showdata();
    return 0;
}