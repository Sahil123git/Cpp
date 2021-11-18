#include <iostream>
#define area(x, y) (x * y)
#define max(x, y) (x > y ? x : y)
#define CT cout
int main()
{
    std::CT << max(3, 5) <<"\n";
    std::CT << area(5, 6);
    return 0;
}