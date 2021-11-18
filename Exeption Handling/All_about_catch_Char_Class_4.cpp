#include <iostream>
using namespace std;
class Exception_1
{
};
class Exception_2 : public Exception_1
{
};
int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw Exception_1();
        }
        else
        {
            c = a / b;
            cout << c << endl;
        }
    }
    catch (Exception_2 ) //Always child first then parent
    {
        cout << "Division by 0 not possible" << endl;
    }
    catch (Exception_1)
    {
        cout << "Division by 0 not possible" << endl;
    }
    cout << "bye";
    return 0;
}
