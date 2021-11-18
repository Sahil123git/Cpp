#include <iostream>
class Base
{
public:
    virtual ~Base() = 0; // Pure virtual destructor
};                       //give ERROR because base class is not defined in derived class

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "~Derived() is executed";
    }
};

int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}
