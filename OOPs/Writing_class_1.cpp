#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle r1, r2;
    // int a, b;
    // cin >> a >> b;
    r1.length = 5;
    r1.breadth = 9;

    r2.length = 7;
    r2.breadth = 8;
    
    cout << "area 1 = "<< r1.area() << endl;
    cout << "perimeter 1 = " << r1.perimeter() << endl;
    cout << "area 2 = " << r2.area() << endl;
    cout << "perimeter 2 = "<< r2.perimeter() << endl;
    return 0;
}