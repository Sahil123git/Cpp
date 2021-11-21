#include <iostream>
using namespace std;

class Inheritance_rect
{
private:
    int length;
    int breadth;

public:
    Inheritance_rect(int l = 0, int b = 0)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        if (l < 0)
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
        if (b < 0)
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

class Inheritance_cuboid : public Inheritance_rect
{
private:
    int height;

public:
    Inheritance_cuboid(int l = 0, int b = 0, int h = 0)
    {
        height = h;
        setlength(l);
        setbreadth(b);
    }
    int area_cuboid()
    {
        return getlength() * getbreadth() * height;
    }
};
int main()
{
    Inheritance_cuboid C(4, 2, 3);
    cout << "area -> " << C.area() << endl;
    cout << "perimter -> " << C.perimeter() << endl;
    cout << "area cuboid -> " << C.area_cuboid();
    return 0;
}