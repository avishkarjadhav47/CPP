//Passing object by value creates a copy, so changes do not affect original object. 
//Passing by reference modifies the original object.
#include<iostream>
using namespace std;
class Student
{
	private:
	    int marks;
	public:
		void setmarks(int m)
		{
			marks=m;
		}
		void increase(Student s)//Mistake is here must be pass by reference not pass by value
		{
			s.marks=s.marks+10;
		}
		void display()
		{
			cout<<"Marks="<<marks<<endl;
		}
};
int main()
{
	Student s1;
	s1.setmarks(50);
	s1.increase(s1);
	s1.display();
	return 0;
}
