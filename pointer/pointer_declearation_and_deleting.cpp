#include <iostream>
using namespace std;

/*program for dynamic allocation

*/
int main()
{
    // int *p;
    // int size, size1;
    // cin >> size;
    // p = new int[size];
    // cout << sizeof *p;
    // delete [] p;
    // cin >> size1;
    // p = new int[size1];
    // cout << sizeof new int;
    // // cout << "enter no of element";
    // return 0;
    int *p;
    p = new int[20];
    cout << sizeof p<<endl;
    delete[] p;

    p = new int[40];
    cout << sizeof p;
}
