#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "This is Base Class";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "\nThis is Derived Class";
    }
};

int main()
{
    B obj;
    obj.display();
    obj.show();
}
