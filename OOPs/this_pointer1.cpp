#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area();
    int perimeter();
};
int main()
{
    Rectangle R1(4, 7);
    cout << R1.area() << endl;
    cout << R1.perimeter() << endl;
    return 0;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}