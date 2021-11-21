#include <iostream>
using namespace std;
class father
{
private:
    int a = 1;

protected:
    int b = 2;

public:
    int c = 3;
    father()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

class son : public father
{
private:
    int d = 4;

protected:     //now in this everything of Father is made public
    int e = 5; //so we can access anything in grand son

public:
    int f = 6;
    son()
    {
        cout << "Father fun -> " << b << " " << c << endl;
        cout << d << " " << e << " " << f << endl;
    }
};

class grand_son : public son
{
private:
    int x = 7;

protected:
    int y = 8;

public:
    int z = 9;
    grand_son() //son made private everything of father so grand_son cant access anything
    {           // of father
        cout << "Father fun -> " << b << " " << c << endl;
        cout << x << " " << y << " " << z << endl;
    }
};

int main()
{
    grand_son gr;
    // cout << gr.a<<" ";
    // cout << gr.b<<" ";  //these all are not accessible
    // cout << gr.d<< " "; // as they are private and protected
    // cout << gr.e<<" ";
    cout << "Father " << gr.c << endl; //-> now in this father is public but then also
    cout << "son " << gr.f << endl;    //we can't access father (private and protected)
    cout << "grand son " << gr.z;
    return 0;
}