#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;int roll;char branch[20];
	public:
	    void get()
		{
		 	cout<<"Enter Name:";cin>>name;
		 	cout<<"Enter Roll Number:";cin>>roll;
		 	cout<<"Enter Branch:";cin>>branch;
		}	
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll Number:"<<roll<<endl;
			cout<<"Branch:"<<branch<<endl<<endl;
		}
};
int main()
{
	student s1,s2;
	s1.get();
	s1.display();
	s2.get();
	s2.display();
	return 0;
}

