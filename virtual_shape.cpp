#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape";
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Triangle";
    }
};

int main()
{
    Shape *s;
    Triangle t;
    s = &t;
    s->draw();
}
