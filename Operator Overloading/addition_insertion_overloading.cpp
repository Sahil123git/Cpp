#include <iostream>
using namespace std;

class Insertion
{
private:
    int real;
    int img;

public:
    Insertion(int R = 0, int I = 0)
    {
        real = R;
        img = I;
    }
    friend Insertion operator+(Insertion C1, Insertion C2);
    friend ostream &operator<<(ostream &Iout, Insertion &C);
};

int main()
{
    Insertion C1(4, 5), C2(2, 3), C;
    C = C1 + C2;
    cout << C;
    return 0;
}
ostream &operator<<(ostream &Iout, Insertion &C)
{
    Iout << C.real << "+i" << C.img << endl;
    return Iout;
}
Insertion operator+(Insertion C1, Insertion C2)
{
    Insertion Temp;
    Temp.real = C1.real + C2.real;
    Temp.img = C1.img + C2.img;
    return Temp;
}
