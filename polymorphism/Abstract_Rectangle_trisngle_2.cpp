#include<iostream>
using namespace std;

class BASE
{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};

class Rectangle_BASE :public BASE
{
private:
    int length;
    int breadth;
public:
    Rectangle_BASE(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }
};

class Circle_BASE :public BASE
{
private:
    int side;
public:
    Circle_BASE(int s = 1)
    {
        side = s;
    }
    int area()
    {
        return side*side;
    }
    int perimeter()
    {
        return 4 * side;
    }
};

int main()
{
    BASE *ptr;

    ptr = new Rectangle_BASE(4, 6);
    cout<<ptr->area()<<" ";
    cout<<ptr->perimeter()<<endl;

    ptr = new Circle_BASE(4);
    cout<<ptr->area()<<" ";
    cout<<ptr->perimeter();
    return 0;
}