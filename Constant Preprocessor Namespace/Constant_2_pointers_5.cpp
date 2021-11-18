#include <iostream>
// using namespace std;
int main()
{
    int a = 5;
    int const *ptr = &a; //This means pointer to const interger
    a++;

    int b = 9;
    ptr = &b; //we can change pointer to point to some another data member

    std::cout << a << " "
              << "\n"
              << *ptr;
    return 0;
}