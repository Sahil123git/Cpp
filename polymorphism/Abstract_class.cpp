#include<iostream>
using namespace std;

class Base_car
{
public:
    virtual void fun() = 0;
};

class Derived_Base_car : public Base_car
{
public:
    void fun()
    {
        cout<<"BASE CAR"<<endl;
    }
};

class Derived_Advance_car :public Base_car
{
public:
    void fun()
    {
        cout<<"ADVANCE CAR"<<endl;
    }
};

int main()
{
    // Basae_car c;    Not allowed in abstract (Virtual Function)
    Base_car *ptr;

    Derived_Base_car B;
    ptr = &B;
    ptr->fun();

    Derived_Advance_car A;
    ptr = &A;
    ptr->fun();

    return 0;
}
