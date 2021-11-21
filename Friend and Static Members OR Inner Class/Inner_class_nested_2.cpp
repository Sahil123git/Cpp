#include<iostream>
using namespace std;

class Base
{
    class inner;
public:
    int exg = 10;
    static int stat;

    class Inner
    {
    public:
        int i = 3;
        void display()
        {
            cout<<stat <<endl;  //it can use only static members
        }
    };
    Inner in;
    
    void fun()
    {
        in.display();  //it can access all members of Inner class except protected and private
        cout<<"displaying inner class"<<endl;
        cout<<"Inner member -> "<<in.i<<endl;
        stat++;
        cout<<"static int -> "<<stat;
    }
};
int Base::stat = 5;

int main()
{
    Base::Inner In_obj;
    In_obj.display();

    Base obj;
    obj.fun();
    return 0;
}