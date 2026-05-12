#include<iostream>
#include<string>
using namespace std;
class Student
{
	int *p;string *s;
	public:
		Student(int x,string y)
		{
			p=new int;
			*p=x;
			s=new string(y);
		}
		void display()
		{
			cout<<"Name:"<<*s<<endl;
			cout<<"Roll Number:"<<*p<<endl;
		}
		Student(Student &obj)
		{
			p=obj.p;
			s=obj.s;
		}
		~Student()
		{
			delete p;delete s;
			cout<<"Done"<<endl;
		}
};
int main()
{
	int x;string y;
	cout<<"Enter Roll number:";cin>>x;
	cout<<"Enter Name:";cin>>y;
	Student s1(x,y);
	Student s2(s1);
	s2.display();
	return 0;
}
