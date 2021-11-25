#include <iostream>
using namespace std;

class Iner_exter
{
private:
    int real;
    int img;

public:
    friend ostream &operator<<(ostream &out, Iner_exter &C);
    friend Iner_exter operator+(Iner_exter C1, Iner_exter C2);
    friend istream &operator>>(istream &input, Iner_exter &C);
};

int main()
{
    Iner_exter C1, C2, C3;
    cin >> C1;
    cin >> C2;
    C3 = C1 + C2;
    cout << C3;
    return 0;
}
ostream &operator<<(ostream &out, Iner_exter &C)
{
    out << C.real << " + i" << C.img << endl;
    return out;
}
Iner_exter operator+(Iner_exter C1, Iner_exter C2)
{
    Iner_exter Temp;
    Temp.real = C1.real + C2.real;
    Temp.img = C1.img + C2.img;
    return Temp;
}
istream &operator>>(istream &input, Iner_exter &C)
{
    input >> C.real >> C.img;
    return input;
}
