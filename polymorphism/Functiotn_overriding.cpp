#include <iostream>
using namespace std;
class Parent
{
public:
    void Base()
    {
        cout << "BASE CLASS" << endl;
    }
};

class Child : public Parent
{
public:
    void Base()
    {
        cout << "DERIVED CLASS" << endl;
    }
};
int main()
{
    Parent C;
    C.Base();
    return 0;
}