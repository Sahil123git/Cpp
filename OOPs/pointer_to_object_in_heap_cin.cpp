#include <iostream>
using namespace std;
class Square
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
    Square *q = new Square();
    int a;
    cin >> a;
    q->side = a;

    cout << "area -> " << q->area() << endl;
    cout << "perimeter -> " << q->perimeter();
    return 0;
}
