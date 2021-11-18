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
} // namespace second

int main()
{
    first::fun();
    second::fun();
    return 0;
}