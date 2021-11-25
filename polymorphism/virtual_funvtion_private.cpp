#include <iostream>
class base
{
public:
    // default base constructor
    base() { std::cout << "base class constructor\n"; }
    virtual ~base()
    {
        std::cout << "base class destructor\n";
    }
    void show()
    {
        std::cout << "show() called on base class\n";
    }
    virtual void print() //this can't be private but derived class print() can be private
    {
        std::cout << "print() called on base class\n";
    }
};

class derived : public base
{
public:
    // default derived constructor
    derived()
    {
        std::cout << "derived class constructor\n";
    }
    ~derived()
    {
        std::cout << "derived class destructor\n";
    }

private:
    virtual void print() //now virtual is private still we are able to achieve that
    {                    //using virtual base we can achieve private virtual also
        std::cout << "print() called on derived class\n";
    }
};

int main()
{
    std::cout << "printing with base class pointer\n";
    base *b_ptr = new derived();
    b_ptr->show();
    b_ptr->print();
    delete b_ptr;
}
