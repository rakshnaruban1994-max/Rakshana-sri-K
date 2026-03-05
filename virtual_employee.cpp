#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void salary()
    {
        cout << "Employee Salary";
    }
};

class Manager : public Employee
{
public:
    void salary()
    {
        cout << "Manager Salary = 50000";
    }
};

int main()
{
    Employee *e;
    Manager m;
    e = &m;
    e->salary();
}
