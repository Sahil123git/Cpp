#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw 1.43;
        }
        else
        {
            c = a / b;
            cout << c;
        }
    }
    catch (int e)  // In this throw is of char so this will not work
    {
        cout << "Division by zero (int) " << e << endl;
    }
    catch (char e)
    {
        cout << "Division by zero (char) " << e << endl;
    }
    catch (double e)
    {
        cout << "Division by zero (double) " << e << endl;
    }
    cout << "bye";
    return 0;
}