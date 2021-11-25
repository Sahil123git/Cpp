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
    friend ostream &operator<<(ostream &out, Insertion &C);
};

int main()
{
    Insertion C1(4, 5);
    cout << C1;
    return 0;
}
ostream &operator<<(ostream &out, Insertion &C)
{
    out << C.real << "+i" << C.img << endl;
    return out;
}
