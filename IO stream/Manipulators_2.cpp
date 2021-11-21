#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    float c, b;  
    a = 123, b = 23.432455698f, c = 2.42782;
    string line = "sahil";

    cout << setw(17) << "HI"
         << "\n";
    cout << setw(30) << setfill('*') << " how_r_" << setw(10) << setfill('*') << "u" << endl; //In this w/o U(stopageit will not work because it after stepfill
    cout << setw(20) << setfill('*') << "w3schools.in" << setw(20) << setfill('*') << "Test" << endl;
    cout << setw(15) << setfill('*') << 99 << 97 << endl;
    cout << setw(12) << right << 99 << 97 << endl;  //It is automatically
    return 0;
}