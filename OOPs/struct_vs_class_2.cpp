#include <iostream>
using namespace std;
class Rectangle
{
public:                          //by default it is private so we will change it to public & this is the difference between class
    int length;                  //and struct .In struct it is by default public
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