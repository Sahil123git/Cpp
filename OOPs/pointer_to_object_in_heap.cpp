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
    Rectangle *q = new Rectangle();
    q->length = 4;
    q->breadth = 6;
    cout <<q->area()<<endl;
    cout<<q->perimeter();
    return 0;
}
