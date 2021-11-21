#include<iostream>
using namespace std;

class Base
{
public:
    // class Inner;   own choice to write or not

    class Inner
    {
    public:

        void display()
        {
            cout<<" function "<<endl;  //it can use only static members of outer class

        }
    };
    Inner in;

    void fun()
    {
        in.display();  //it can access all members of Inner class which are public
    }
};

int main()
{
    Base::Inner ini; Base ba;
    ini.display(); ba.fun();
    return 0;
}