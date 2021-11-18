#include <bits/stdc++.h>
using namespace std;

class Test
{
public:
    Test() // Constructor
    {
        cout << "Constructor called\n";
    }

// private:
//     ~Test() // Private Destructor//this will create error brecause this is private
//     {
//         cout << "Destructor called\n";
//     }
};

int main()
{
    Test *t = (Test *)malloc(sizeof(Test));
    Test();
    return 0;
}
