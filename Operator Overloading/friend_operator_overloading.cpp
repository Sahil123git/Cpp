#include <iostream>
using namespace std;
class Overloading
{
private:
    int real;
    int img;

public:
    Overloading(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
    friend Overloading operator+(Overloading C1, Overloading C2);
};

int main()
{
    Overloading C1(5, 4), C2(5, 3), C;
    C = C1 + C2;
    C.display();
    return 0;
}

Overloading operator+(Overloading C1, Overloading C2)
{
    Overloading Temp;
    Temp.real = C1.real + C2.real;
    Temp.img = C1.img + C2.img;
    return Temp;
}
