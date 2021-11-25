#include <iostream>
using namespace std;
class shape
{
public:
    virtual void draw() = 0;
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "circle" << endl;
    }
};
class Rectangle : public shape
{
public:
    void draw()
    {
        cout << "Rect" << endl;
    }
};
int main()
{
    circle C1, C2, C3;
    Rectangle R1, R2, R3;
    shape *p[3] = {&C1, &R2, &C2};
    for (int i = 0; i < 3; i++)
    {
        p[i]->draw();
    }
}