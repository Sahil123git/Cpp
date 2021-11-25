#include <iostream>
using namespace std;
class Overloading
{
public:
    int real;
    int img;
    Overloading(int R = 0, int I = 0)
    {
        real = R;
        img = I;
    }

    Overloading add(Overloading C)
    {
        Overloading temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
};
int main()
{
    Overloading C1(4, 6);
    Overloading C2(5, 2);
    Overloading C3;

    C3 = C1.add(C2); //C2 give its values to C
    cout << C3.real << "+i" << C3.img << endl;

    return 0;
}