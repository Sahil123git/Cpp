#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout << "FIRST" << endl;
    }
} // namespace first

namespace second
{
    void fun()
    {
        cout << "SECOND" << endl;
    }
} // namespace 

using namespace first;
int main()
{
    cout << "This is ";
    fun(); //First is already initialized

    cout << "and ";
    second::fun();
    return 0;
}