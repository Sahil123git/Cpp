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

    DERIVED_Base_Car B;
    ptr = &B;
    ptr->car();

    DERIVED_Advance_Car A;
    ptr = &A;
    ptr->car();

    return 0;
}
