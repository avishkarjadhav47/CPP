#include<iostream>
using namespace std;
class Student
{
int marks;
public:
void setMarks(int m)
{marks = m;
}
void increase()
{
marks = marks + 10;
}
void display()
{
cout << "Marks = " << marks;
}
};
int main()
{
Student s1;
s1.setMarks(50);
s1.increase();
s1.display();
return 0;
}

