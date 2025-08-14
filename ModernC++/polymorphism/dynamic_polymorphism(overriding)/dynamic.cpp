#include <iostream>

class Base
{
    public:
    virtual void display()
    {
        std::cout << "Base::display\n";
    }
};

class Derived : public Base
{
    public:
    void display() 
    {
        std::cout << "Derived::display\n";
    }
};

int main()
{
    Base *ptr = new Derived();
    ptr->display();

    ptr = new Base();
    ptr->display();
    
    delete ptr;

    return 0;
}