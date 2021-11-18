#include <iostream>
// macro with parameter
#define AREA(l, b) (l * b)
#define PI 3.14
using namespace std;
int main()
{
    int L_1 = 10, L_2 = 5, area;

    area = AREA(L_1, L_2);

    cout << "Area of rectangle is: " << area << endl;
    cout << "Pie value ->" << PI;
    return 0;
}
