#include <iostream>
using namespace std;

template <class T, class R> //it can take any two data type
void add(T n1, R n2)
{
    cout << n1 + n2;
}
int main()
{
    int main_n1 = 2;
    float main_n2 = 2.3;
    add(main_n1, main_n2);
    return 0;
}
