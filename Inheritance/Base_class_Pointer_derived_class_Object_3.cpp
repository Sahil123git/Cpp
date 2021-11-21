#include <iostream>
using namespace std;

class BASE
{
public: // this programme is to check the error
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
    DERIVED *ptr;
    ptr = new BASE(); /// this is not valid as BASE is coming first and DERIVED after that which is wrong
    ptr->area();
    // ptr->peprimter();
    return 0;
}