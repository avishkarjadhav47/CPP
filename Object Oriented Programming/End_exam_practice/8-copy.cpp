#include<iostream>
#include<string>
using namespace std;
class student
{string s;
	public:
		student(string x)
		{
			s=x;
		}
		student(student &obj)
		{
			s=obj.s;
		}
		void display()
		{
			cout<<s<<endl;
		}
};
int main()
{
	student s1("Ram");
	student s2(s1);
	s2.display();
	return 0;
}
