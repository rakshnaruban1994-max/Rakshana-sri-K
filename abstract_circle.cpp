#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        float r = 4;
        cout << "Area of Circle = " << 3.14 * r * r;
    }
};

int main()
{
    Circle c;
    c.area();
}
