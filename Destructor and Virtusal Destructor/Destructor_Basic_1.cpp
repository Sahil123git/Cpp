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

int main()
{
    Rectangle R;

    return 0;
}
