#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
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
    void setbreadth(int b)
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
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle R(6);  //(first the programme will take values of R1 from setlength and setbreadth & R2) 
    Rectangle R1(6, 5);  //then rest of the cout functions will take place
    cout << "length 1-> " << R.getlength() << endl;
    cout << "breadth 1-> " << R.getbreadth() << endl;
    cout << "area 1-> " << R.area() << endl;
    cout << "perimeter 1-> " << R.perimeter() << endl;
    cout << "area 2-> " << R1.area() << endl;
    cout << "perimter 2-> " << R1.perimeter() << endl;
    return 0;
}
