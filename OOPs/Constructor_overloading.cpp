#include <iostream>
using namespace std;
class Overloading
{
private:
    int a, b;

public:
    // Overloading() //for constructor overloading, name can remain same but arguments shohuld be diff
    // {
    //     a = 0;
    //     b = 0;
    // }
    Overloading(int a_1 = 0, int b_1 = 0)
    {
        a = a_1;
        b = b_1;
    }
    int area()
    {
        int area = (a * b);
        return area;
    }
};
int main()
{
    Overloading r1;
    Overloading r2(2, 3);
    cout << r1.area() << endl;
    cout << r2.area();
    return 0;
}