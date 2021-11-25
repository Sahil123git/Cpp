#include <iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    Rational operator+(Rational r)
    {
        Rational temp;
        temp.p = p * r.q + q * r.p;
        temp.q = q * r.q;
        return temp;
    }
    friend ostream &operator<<(ostream &output, Rational &r);
    friend istream &operator>>(istream &input, Rational &R);
};

int main()
{
    Rational r1, r2, r3;
    cin >> r1;
    cin >> r2;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
}
ostream &operator<<(ostream &output, Rational &r)
{
    output << r.p << "/" << r.q;
    return output;
}
istream &operator>>(istream &input, Rational &R)
{
    input >> R.p >> R.q;
    return input;
}