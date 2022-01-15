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
    unique_ptr<Rectangle> ptr(new Rectangle(3, 5));
    cout << ptr->area();
    //Using smart pointers we don't have to delete the memory
    //othrewise it will create memoery leak
    return 0;
}