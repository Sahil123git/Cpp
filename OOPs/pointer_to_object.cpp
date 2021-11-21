#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
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
    Rectangle r1;  //this is in stack
    Rectangle *p1; // this is also in stack
    p1 = &r1;
    p1->length = 4;
    p1->breadth = 5;
    cout << p1->area() << endl;
    cout << p1->perimeter();
    return 0;
}