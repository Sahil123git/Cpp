#include <iostream>
using namespace std;
int main()
{
    int a = 10; //Concept 1
    auto f = [a]() { cout << a << endl; };
    f();
    a++;
    f();
    cout << endl;
    int b = 7;
    auto g = [&b]() { cout << ++b << endl; }; //Concept 2
    g();
    b++;
    g();
    cout << endl;
    int c = 19;
    auto h = [&]() { cout << ++c << endl; }; //Concept 3
    h();
    c++;
    h();
    cout << endl;

    return 0;
}