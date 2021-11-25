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
    Base_car *ptr;

    ptr = new Derived_Base_car();
    ptr->fun();

    ptr = new Derived_Advance_car;
    ptr->fun();

    return 0;
}
