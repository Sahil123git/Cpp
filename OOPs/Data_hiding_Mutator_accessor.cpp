#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
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
    Rectangle r1;
    
    r1.setlength(5);
    r1.setbreadth(6);

    cout << r1.getlength() << endl;
    cout << r1.getbreadth() << endl;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    return 0;
}