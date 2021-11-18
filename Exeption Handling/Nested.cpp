#include <iostream>
using namespace std;

int main()
{
    int c = 3;
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Handle Partially " << n << endl;
            throw c; //Re-throwing an exception
            // }   throw c;   can do throw here also
        }
    }
    catch (int n)
    {
        cout << "Handle remaining " << n;
    }

    return 0;
}