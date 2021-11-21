#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;
    friend int addFive(Distance);

public:
    Distance() : meter(0) // Pta chla
                          // Usne btaya na ki meter execute krega pehle aur meter = 0 ho jaigha.Aur phir contructor ki body execute hoigi..
                          //Ye bus constructor ki body ko badd me execute karega..aur costructor ke sath vli value ko pehle..
                          // friend function
    {
        meter++;
    }
};

// friend function definition
int addFive(Distance d)
{

    //accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}