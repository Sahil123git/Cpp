#include <iostream>
using namespace std;
class Box
{
private:
    float length;
    float breadth;
    float height;

public:
    void get_height(float h)
    {
        height = h;
    }
    void get_length(float l)
    {
        length = l;
    }
    void get_breadth(float b)
    {
        breadth = b;
    }
    float get_vol()
    {
        float vol;
        vol = length * breadth * height;
        return vol;
    }
    void dim()
    {
        cout << "Dim are -> " << length << " " << breadth << " " << height << endl;
    }
    Box operator*(Box &b) //For Multiplication
    {
        Box box;
        box.length = length * b.length;
        box.breadth = breadth * b.breadth;
        box.height = height * b.height;
        return box;
    }
    Box operator+(Box &b) //For Addition
    {
        Box box;
        box.length = length + b.length;
        box.breadth = breadth + b.breadth;
        box.height = height + b.height;
        return box;
    }

    void display(float vol)
    {
        cout << vol << endl;
    }
};
int main()
{
    Box b1, b2, b3, b4;
    b1.get_length(1.3f);
    b1.get_breadth(2.3f);
    b1.get_height(5.3f);
    float vol1;
    vol1 = b1.get_vol();
    b1.display(vol1);

    b2.get_length(1.3f);
    b2.get_breadth(4.3f);
    b2.get_height(2.3f);
    b2.get_vol();
    float vol2;
    vol2 = b1.get_vol();
    b1.display(vol2);

    float v1, v2;
    b3 = b1 + b2; //add operator overloading
    b3.dim();
    v1 = b3.get_vol();
    b3.display(v1);

    b4 = b1 * b2; //multiply operator overloading
    b4.dim();
    v2 = b4.get_vol();
    b4.display(v2);
    return 0;
}