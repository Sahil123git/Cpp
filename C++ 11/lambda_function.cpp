#include <iostream>
using namespace std;
template <typename t>
void fun(t p)
{
    p();
}
int main()
{
    int a = 10;
    auto f = [&a]() { cout << ++a << endl; };
    fun(f); //This will give whole value of f to fun function
    fun(f);
    cout << endl;
    int b = 20;
    auto g = [&b]() { cout << b++ << endl; };
    fun(g); //This will give whole value of f to fun function
    fun(g);
    return 0;
}