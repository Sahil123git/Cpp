#include <iostream>
using namespace std;
int main()
{
    [](int x, int y) { cout << "sum is " << x + y << endl; }(10, 20); //Concept 1

    cout << ([](int x, int y) { return x + y; }(10, 30)); //Concept 2
    cout << endl;

    int a = [](int x, int y) { return x + y; }(12, 32); //Concept 3
    cout << a << endl;

    float b = [](float x, float y) -> int { return x + y; }(1.3f, 7.45f); //Concept 4
    cout << b;

    return 0;     
}