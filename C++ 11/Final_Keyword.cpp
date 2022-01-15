#include <iostream>
using namespace std;

class Parent
{
    virtual void base() final //we have to write virtual function
    {
    }
};

// class child : public Parent
// {
//     void base()   //because of final keyword it will not work
//     {
//     }
// };

int main()
{
    cout << "Final keyword";
    return 0;
}