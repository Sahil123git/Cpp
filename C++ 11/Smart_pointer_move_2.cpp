#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    unique_ptr<Rectangle> ptr_1(new Rectangle(3, 5));
    cout << "ptr_1 -> " << ptr_1->area() << endl;

    unique_ptr<Rectangle> ptr_2;
    ptr_2 = move(ptr_1);
    cout << "ptr_2 -> " << ptr_2->area() << endl;
    cout << "ptr_1 -> " << ptr_1->area(); //this will print nothing as now ptr_2 is has power

    return 0;
}