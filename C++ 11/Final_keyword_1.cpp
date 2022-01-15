#include <iostream>
using namespace std;
class Parent final
{
};
// class child : public Parent   Now we cannot inherit from Parent as there is final keword 
// {
// };
int main()
{
    cout << "Final keyword";
    return 0;
}