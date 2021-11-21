#include <iostream>
using namespace std;

class Inheritance_base
{
public:
    void display()
    {
        cout << "Sahil" << endl;
    }
};

class Inheritance_base2 : public Inheritance_base
{
public:
    void display1()
    {
        cout << "Dussa" << endl;
    }
};
int main()
{
    Inheritance_base2 R;
    R.display();
    R.display1();
    return 0;
}
