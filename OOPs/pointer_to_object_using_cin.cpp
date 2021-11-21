#include <iostream>
using namespace std;
class Sqaure
{
public:
    int side;
    int area()
    {
        return side * side;
    }
    int perimeter()
    {
        return 4 * side;
    }
};
int main()
{
    Sqaure r1, r2; //this is in stack
    Sqaure *p1;    // this is also in stack
    Sqaure *p2;
    p1 = &r1;
    p2 = &r2;
    int a, b;
    cin >> a >> b;

    p1->side = a;

    p2->side = b;

    cout << "area 1 -> " << p1->area() << endl;
    cout << "perimeter 1 -> " << p1->perimeter() << endl;
    cout << "area 2 -> " << p2->area() << endl;
    cout << "perimeter 2 -> " << p2->perimeter();
    return 0;
}