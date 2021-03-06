//Operator Overloading

#include <iostream>

using namespace std;

class Complex
{
public:
    int a, b;
    void input(string s)
    {
        int v1 = 0;
        int i = 0;
        while (s[i] != '+')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
        {
            i++;
        }
        int v2 = 0;
        while (i < s.length())
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }
};

//Overload operators + and << for the class complex
Complex operator+(Complex C1, Complex C2)
{
    Complex temp;
    temp.a = C1.a + C2.a; //a and b are public thatswhy they are accessible
    temp.b = C1.b + C2.b;
    return temp;
}
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
ostream &operator<<(ostream &out, Complex C)
{
    out << C.a << "+i" << C.b;
    return out;
}
//<< should print a complex number in the format "a+ib"

int main()
{
    Complex x, y;
    string s1, s2;
    cin >> s1; //3+i4
    cin >> s2; //5+i6
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
}
