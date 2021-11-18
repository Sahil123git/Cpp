#include<iostream>
using namespace std;

class Myexception :exception
{

};
int Division(int x, int y) throw(Myexception)  //your choice to use or not 
{
    if (y == 0)
    {
        throw Myexception();
    }
    else
    {
        return x/y;
    }
}
int main()
{
    int a = 10, b = 0, c;
    try
    {
        c = Division(a, b);
        cout<< c <<endl;
    }
    catch (Myexception e)
    {
        cout<<"Divsion by zero"<<endl;
    }
    cout<<"bye";
    return 0;
}