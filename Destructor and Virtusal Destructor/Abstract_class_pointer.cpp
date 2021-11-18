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
    Database *ptr;
    Accoutant o;
    ptr = &o;
    ptr->getname();

    Manager m;
    ptr = &o;
    ptr->getname();
    return 0;
}