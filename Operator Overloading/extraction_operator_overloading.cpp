#include <iostream>
using namespace std;

class Extraction
{
private:
    int real;
    int img;

public:
    friend ostream &operator<<(ostream &out, Extraction &C1);
    friend istream &operator>>(istream &input, Extraction &C1);
};

int main()
{
    Extraction C;
    cin >> C;
    cout << C;
    return 0;
}
ostream &operator<<(ostream &out, Extraction &C1)
{
    out << C1.real << " + i" << C1.img << endl;
    return out;
}
istream &operator>>(istream &input, Extraction &C1)
{
    input >> C1.real >> C1.img;
    return input;
}
