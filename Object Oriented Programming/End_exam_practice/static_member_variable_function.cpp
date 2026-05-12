#include<iostream>
#include<string>
using namespace std;
class Students
{
private:
	int roll;
	//int count=0;
	string name;
	static int count;
public:
	void set(int r,string n)
	{
		name=n;
		roll=r;
		count++;
	}
	void display()
	{
		cout<<"Student Count:"<<count<<endl;;
		cout<<"Roll Number:"<<roll<<endl;
		cout<<"Name:"<<name<<endl<<endl;
	}
	static void total()
	{
		cout<<"Total Number Of Students:"<<count<<endl;
	}
};
int Students::count=0;
int main()
{
	Students s1,s2;
	s1.set(31,"Ram");
	s1.display();
	s2.set(32,"Rohan");
	s2.display();
	Students::total();
	return 0;
}
