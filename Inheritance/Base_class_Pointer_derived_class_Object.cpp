#include <iostream>
using namespace std;

class BASE
{
public:
    void area()
    {
        cout << "BASE_CLASS " << endl;
    }
};

class DERIVED : public BASE
{
public:
    void perimeter()
    {
        cout << "DERIVE_ CLASS " << endl;
    }
};

int main()
{
    DERIVED D;
    BASE *ptr;
    ptr = &D;
    ptr->area();
    // ptr->peprimter();
    return 0;
}