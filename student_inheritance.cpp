#include <iostream>
using namespace std;

class Student
{
public:
    int roll = 10;
};

class Result : public Student
{
public:
    int marks = 90;
};

int main()
{
    Result r;
    cout << "Roll No = " << r.roll << endl;
    cout << "Marks = " << r.marks;
}
