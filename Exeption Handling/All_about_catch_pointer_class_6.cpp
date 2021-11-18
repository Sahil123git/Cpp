#include <iostream>
using namespace std;

// Here we specify the exceptions that this function
// throws.
class Exception : public exception
{
public:
    char *What()  //may be not wrong
    {
        return "what exception";
    }
};

int main()
{
    int a = 9, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw Exception();
        }
        else
        {
            c = a / b;
            cout << c << endl;
        }
    }
    catch (...)
    {
        cout << "Caught exception from fun()";
    }
    cout << "bye";
    return 0;
}
