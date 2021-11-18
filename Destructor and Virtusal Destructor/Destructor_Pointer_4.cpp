#include <iostream>
using namespace std;
class Rectangle
{
public:
    int *ptr;
    Rectangle()
    {
        ptr = new int[5];
        cout << "Constructed" << endl;
    }
    ~Rectangle()
    {
        delete[] ptr;
        cout << "Destructed" << endl;
    }
};

int main()
{
    Rectangle *pt = new Rectangle();
    delete pt;
    return 0;
}
