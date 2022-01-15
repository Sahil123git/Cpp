#include <iostream>
using namespace std;
class Test
{
public:
    int x = 1; //concept 1
    int y = 3;

public:
    // Test()
    // {
    //     x = 3;
    //     y = 3;
    // }

    int area()
    {
        return x * y;
    }
};
int main()
{
    Test t;
    int c;
    c = t.area();
    cout << c;
    return 0;
}
