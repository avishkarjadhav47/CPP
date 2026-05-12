#include <iostream>
using namespace std;

class emp
{
	private:
		int id;float salary;char name[20];
	public:
	void getdata();
	void display();	
};

void emp::getdata()
{
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter ID:"<<endl;
	cin>>id;
	cout<<"Enter Salary:"<<endl;
	cin>>salary;

}

void emp::display()
{
	cout<<"Name:"<<name<<endl;
	cout<<"ID:"<<id<<endl;;
	cout<<"Salary:"<<salary<<endl;
}

int main()
{
	int n;
	cout<<"Enter number of employee:"<<endl;
	cin>>n;
	
	
	emp e[n];
	for(int i=0;i<n;i++)
	{
		e[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		e[i].display();
	}
	return 0;
	
}



















