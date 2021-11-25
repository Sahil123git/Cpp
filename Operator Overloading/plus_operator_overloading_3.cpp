#include <iostream>
using namespace std;
class Overloading
{
private:
    int real;
    int img;

public:
    Overloading(int R = 0, int I = 0)
    {
        real = R;
        img = I;
    }

    void display()
    {
        cout << real << "+i" << img << endl;
    }
    Overloading operator+(Overloading C)
    {
        Overloading temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
};
int main()
{
    Overloading C1(2, 2), C2(4, 3), C3;

    C3 = C1 + C2;
    C3.display();

    return 0;
}