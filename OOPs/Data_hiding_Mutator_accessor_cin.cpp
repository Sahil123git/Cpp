#include <iostream>
using namespace std;

class Square
{
private:
    int side;

public:
    void setside(int s)
    {
        if (s < 0)
        {
            side = 0;
            cout << "Re Enter positive value" << endl;
        }
        else
        {
            side = s;
        }
    }
    int getside()
    {
        return side;
    }
    int area()
    {
        return side * side;
    }
    int perimeter()
    {
        return 4 * side;
    }
};
int main()
{
    int a;
    Square S1;
    cin >> a;
    S1.setside(a);
    
    cout << "side = " << S1.getside() << endl;
    cout << "area = " << S1.area() << endl;
    cout << "perimeter = " << S1.perimeter();

    return 0;
}