#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0);
    Rectangle(Rectangle &R);
    void setlength(int l);
    void setbreadth(int b);
    int getlength();
    int getbreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main()
{
    int a, b;
    cin >> a >> b;
    Rectangle R1(a, b); //(first the programme will take values of R1 from setlength and setbreadth & R2) 
    Rectangle R2(R1);     //then rest of the cout functions will take place
    cout << "length 1-> " << R1.getlength() << endl;
    cout << "breadth 1-> " << R1.getbreadth() << endl;
    cout << "area 1-> " << R1.area() << endl;
    cout << "perimeter 1-> " << R1.perimeter() << endl;
    cout << "area 2-> " << R2.area() << endl;
    cout << "perimter 2-> " << R2.perimeter() << endl;
    if (R1.isSquare())
    {
        cout << "R1 square" << endl;
    }
    else
    {
        cout << "R1 rectangle" << endl;
    }
    return 0;
}
Rectangle::Rectangle(int l, int b)    //this will give value to the setlength & setbreadth
{
    setlength(l);
    setbreadth(b);
}
void Rectangle::setlength(int l)
{
    if (l <= 0)
    {
        length = 1;
    }
    else
    {
        length = l;
    }
}
void Rectangle::setbreadth(int b)
{
    if (b <= 0)
    {
        breadth = 1;
    }
    else
    {
        breadth = b;
    }
}
Rectangle::Rectangle(Rectangle &R)
{
    length = R.length;
    breadth = R.breadth;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
int Rectangle::getlength()
{
    return length;
}
int Rectangle::getbreadth()
{
    return breadth;
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "destroyed rectangle " << endl;
}