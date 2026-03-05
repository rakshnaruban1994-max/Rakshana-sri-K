#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base Class Function";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class Function";
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->show();
}
