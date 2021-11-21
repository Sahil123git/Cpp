#include <iostream>
#include <cmath>
using namespace std;

class square
{
public:
    int side;
    int area()
    {
        return pow(side, 2);
    }
    int perimeter()
    {
        return 4 * side;
    }
};
int main()
{
    square s1;
    int a;
    cin >> a;
    s1.side = a;
    cout << s1.area() << endl;
    cout << s1.perimeter();

    return 0;
}