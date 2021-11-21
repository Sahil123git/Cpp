#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        cout << "hello" << endl;
        length = 1;
        breadth = 1;
    }
    // Rectangle(int a,int b)  we can have more than 1 constructors but they should of diff type
    // {
    //     length = 1;
    //     breadth = 1;
    // }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
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
    Rectangle();//we can do like this also but this is not an example of non parametrised (only for knowledge)
    Rectangle R;
    cout << "length 1-> " << R.getlength() << endl;
    cout << "breadth 1-> " << R.getbreadth() << endl;
    cout << "area 1-> " << R.area() << endl;
    cout << "perimeter 1-> " << R.perimeter() << endl;
    return 0;
}
