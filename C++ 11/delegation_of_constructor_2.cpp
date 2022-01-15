#include <iostream>
using namespace std;
class Test
{
private:
    int x; 
    int y;

public:
    Test(int a, int b)
    {
        x = a;
        y = b;
    }
    Test() : Test(3, 4) //concept 2
    {
    }
    int area()
    {
        return x * y;
    }
};
int main()
{
    Test t; //If using delegation don't pass value from here
    int c;
    c = t.area();
    cout << c;
    return 0;
}
