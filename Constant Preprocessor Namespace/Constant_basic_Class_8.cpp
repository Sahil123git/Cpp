#include <iostream>
using namespace std;
class Constants
{
public:
    int x = 10, y = 20;
    void display() const
    {
        //y++;
        // x++;  Can't do this because display is const
        cout << "Display -> " << x << " " << y << endl;
    }
};
int main()
{
    Constants C1;
    C1.display();
    cout << "Int main -> " << C1.x << " " << C1.y;
    return 0;
}