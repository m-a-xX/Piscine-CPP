#include <iostream>
#include <string.h>

class Base
{
    public:
        virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

void identify_from_pointer(Base * p)
{
    Base *tmp;

    if ((tmp = dynamic_cast<A*>(p)))
        std::cout << "A\n";
    else if ((tmp = dynamic_cast<B*>(p)))
        std::cout << "B\n";
    else
        std::cout << "C\n";
}

void identify_from_reference( Base & p)
{
    try
    {
        Base &tmp = dynamic_cast<A&>(p);
        (void)tmp;
        std::cout << "A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
        Base &tmp = dynamic_cast<B&>(p);
        (void)tmp;
        std::cout << "B\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "C\n";
        }
    }
}

int main()
{
    std::cout << "Welcome in this identifying program !\n\n";
    std::cout << "Create classes...\n\n";
    A a;
    A &ra = a;
    B b;
    B &rb = b;
    C c;
    C &rc = c;
    std::cout << "Identification of Class A :\n";
    identify_from_pointer(&a);
    identify_from_reference(ra);
    std::cout << "Identification of Class B :\n";
    identify_from_pointer(&b);
    identify_from_reference(rb);
    std::cout << "Identification of Class C :\n";
    identify_from_pointer(&c);
    identify_from_reference(rc);
}