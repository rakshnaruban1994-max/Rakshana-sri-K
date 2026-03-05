#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    void area()
    {
        int l = 5, b = 3;
        cout << "Area of Rectangle = " << l * b;
    }
};

int main()
{
    Rectangle r;
    r.area();
}
