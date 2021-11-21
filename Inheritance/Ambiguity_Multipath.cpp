#include <iostream>
using namespace std;

class Ambiguity
{
public:
    int a = 3;
    Ambiguity()
    {
        cout << "In Function " << a << " ";
    }
};

class Ambiguity_1 : virtual public Ambiguity
{
public:
    int b = 4;
    Ambiguity_1()
    {
        cout << b << " ";
    }
};

class Ambiguity_2 : virtual public Ambiguity
{
public:
    int c = 6;
    Ambiguity_2()
    {
        cout << c << " ";
    }
};

class Ambiguity_3 : public Ambiguity_1, public Ambiguity_2
{
public:
    int d = 5;
    Ambiguity_3()
    {
        cout << d << endl;
        cout << "area -> " << a * b * c * d << endl;
    }
    int area()
    {
        return a * b * c * d;
    }
};

int main()
{
    Ambiguity_3 gba;

    cout << "area from function in main -> " << gba.area() << endl;
    cout << " In main " << gba.a << " ";
    cout << gba.b << " ";
    cout << gba.c << " ";
    cout << gba.d << " ";
   
    return 0;
}
