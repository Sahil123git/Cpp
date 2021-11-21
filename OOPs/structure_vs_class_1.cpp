#include <iostream>
using namespace std;
struct Rectangle
{
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
    Rectangle R1;
    R1.length = 6;
    R1.breadth = 4;
    cout << R1.area() << endl;
    cout << R1.perimeter() << endl;
    return 0;
}