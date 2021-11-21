#include <iostream>
using namespace std;

class Rectangle //         METHOD 1
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setlength(l);
        setbreadth(b);
    }
    // Rectangle(Rectangle &R) //we can take this variable of our choice
    // {
    //     cout << "Copied R.length " << R.length << " "
    //          << "length " << length << endl;
    //     length = R.length;   //R.length is the R1 length's = 1  but it is not taking value from int main()
    //     breadth = R.breadth; //R.breadth is the the R1 Breadth's = 6
    // }
    void setlength(int l)
    {
        if (l <= 0)
        {
            length = 1;
        }
        else
        {
            length = l;
        }
    }
    void setbreadth(int b)
    {
        if (b <= 0)
        {
            breadth = 1;
            b = 65;
        }
        else
        {
            breadth = b;
        }
    }
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
    int a, b;
    cin >> a >> b;
    Rectangle R1(a, b);
    // cout << a << endl;
    Rectangle R2(R1);
    cout << "length 1-> " << R1.getlength() << endl;
    cout << "breadth 1-> " << R1.getbreadth() << endl;
    cout << "area 1-> " << R1.area() << endl;
    cout << "perimeter 1-> " << R1.perimeter() << endl;
    cout << "area 2-> " << R2.area() << endl;
    cout << "perimter 2-> " << R2.perimeter() << endl;
    return 0;
}
