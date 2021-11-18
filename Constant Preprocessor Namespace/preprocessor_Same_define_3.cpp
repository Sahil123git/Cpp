#include <iostream>
// using namespace std;
#define PI 3.14
#ifndef PI
#define PI 3 //When you want to check whether you have initialized PI or not
#endif
int main()
{
    std::cout << PI << " -> endl";  //endl is Giving error without using namespace std
    return 0;
}