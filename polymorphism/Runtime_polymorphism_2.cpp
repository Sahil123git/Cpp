#include <iostream>
using namespace std;

class BASE
{
public:
    virtual void car()
    {
        cout << "BASE CAR";
    }
};

class DERIVED_Base_Car : public BASE
{
public:
    void car()
    {
        cout << "DERIVED BASE CAR" << endl;
    }
};

class DERIVED_Advance_Car : public BASE
{
public:
    void car()
    {
        cout << "DERIVED ADVANCE CAR" << endl;
    }
};

int main()
{
    BASE *ptr;

    ptr = new DERIVED_Base_Car();
    ptr->car();

    ptr = new DERIVED_Advance_Car();
    ptr->car();

    return 0;
}
