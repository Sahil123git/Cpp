#include <iostream>
using namespace std;

template <class T> //it can take any two data type
class Rectangle
{
public:
    T n1, n2;
    Rectangle(T num1, T num2)
    {
        n1 = num1;
        n2 = num2;
    }
    void add();
};
template <class T>
void Rectangle<T>::add()
{
    cout << n1 + n2;
}

int main()
{
    Rectangle<float> num(8.7f, 5.5f);
    num.add();
    return 0;
}
