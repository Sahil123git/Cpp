#include <iostream>
using namespace std;
void (*fptr)();
void start()
{
    cout << "hello world";
}

int main()
{
     fptr = start;
    (*fptr)();
    return 0;
}