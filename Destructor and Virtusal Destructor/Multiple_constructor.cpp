#include <iostream>
using namespace std;

class abc
{
public:
    int a;
    abc()
    {
        cout << "Default\n";
    }
    abc(int)
    {
        cout << "Int\n";
    }
    ~abc()
    {
        cout << "Destructor\n";
    }
};
int main()
{
    abc();    //first this will call constructor and destructor
    abc a(5); //then this will call it's constructor and destructor
}