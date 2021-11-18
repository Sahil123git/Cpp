#include <iostream>
using namespace std;

class Database //abstract class
{
public:
    virtual void getname() = 0;
};

class Accoutant : public Database
{
public:
    void getname()
    {
        cout << "Accoutant" << endl;
    }
};
class Manager : public Database
{
public:
    void getname()
    {
        cout << "Manager" << endl;
    }
};

int main()
{
    Accoutant m;
    Manager a;
    // Database d;   you can't make objects of abstract class

    m.getname();
    a.getname();
    return 0;
}