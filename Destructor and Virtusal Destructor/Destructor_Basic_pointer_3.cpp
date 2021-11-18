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
    // Rectangle *ptr; //this will help in constructing pointer of *ptr but will not call Rectangle constructor
    Rectangle *ptr = new Rectangle(); //this will do both calling and making pointer
    delete ptr;
    // delete[] ptr; this is for deleting array ponter
}
int main()
{
    fun();
    return 0;
}
