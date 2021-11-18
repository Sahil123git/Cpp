#include <iostream>
using namespace std;
class Rectangle
{
public:
    Rectangle()
    {
        cout << "Constructed" << endl;
    }
    ~Rectangle()
    {
        cout << "Destructed" << endl;
    }
};
void fun()
{
    Rectangle R;
}

int main()
{
    fun();
    return 0;
}
