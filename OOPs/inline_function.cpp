#include <iostream>
using namespace std;
class Rectangle
{
public:
    void fun()
    {
        cout << "In-line" << endl;
    }
   inline void fun2();
};
int main()
{
    Rectangle R1;
    R1.fun();
    R1.fun2();
}
void Rectangle::fun2()
{
    cout << "out line";
}