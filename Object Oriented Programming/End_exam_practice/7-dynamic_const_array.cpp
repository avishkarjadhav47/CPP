#include<iostream>
#include<string>
using namespace std;
class Student
{
	int *p;
	public:
		Student()
		{
			p=new int[2];
			cout<<"Enter Marks:";
			for(int i=0;i<2;i++)
			{
				cin>>p[i];
			}
		}
		void display()
		{
			cout<<"Enterd Marks Are:";
			for(int i=0;i<2;i++)
			{
				cout<<p[i]<<" ";
			}
		}
		~Student()
		{
			delete []p;
			cout<<"Done"<<endl;
		}
};
int main()
{
	Student s1;
	s1.display();
	return 0;
}
