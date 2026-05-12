#include<iostream>
using namespace std;

class student
{
private:
    int marks;

public:

    void getdata(int m)
    {
        marks = m;
    }

    void update(student s)   // call by value
    {
        s.marks = s.marks + 10;
        cout<<"Inside function marks = "<<s.marks<<endl;
    }

    void display()
    {
        cout<<"Marks = "<<marks<<endl;
    }
};

int main()
{
    student s1;

    s1.getdata(50);

    s1.update(s1);

    s1.display();

    return 0;
}
