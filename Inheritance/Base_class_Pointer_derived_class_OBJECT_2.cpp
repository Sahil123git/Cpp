#include <iostream>
using namespace std;

class BASE
{
public:
    void area()
    {
        cout << "BASE CLASS" << endl;
    }
};

class DERIVED : public BASE
{
public:
    void perimeter()
    {
        cout << "DERIVED CLASS" << endl;
    }
};

int main()
{
    BASE *ptr;
    ptr = new DERIVED();
    ptr->area();
    // ptr->perimter();
    return 0;
}