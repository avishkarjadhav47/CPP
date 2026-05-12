#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		int id;
		string name;
		double salary;
	public:
	    void getdata()
	         {
	         	cout<<"Enter ID:";
	         	cin>>id;
	         	cout<<"Enter Name:";
	         	cin.ignore();
	         	getline(cin,name);
	         	cout<<"Enter Salary:";
	         	cin>>salary;
			 }
		void displaydata()
		     {
		     	cout<<"ID:"<<id<<endl;
		     	cout<<"Name:"<<name<<endl;
		     	cout<<"Salary:"<<salary<<endl;
			 }	 
};
int main()
{
	int n;
	cout<<"Enter Number of Employees:";
	cin>>n;
	Employee e[n];
	for (int i=0;i<n;i++)
	    {
	    	cout<<"Enter Data of Employee "<<(i+1)<<endl;
	    	e[i].getdata();
		}
	cout<<endl;	
	for (int i=0;i<n;i++)
	    {
	    	cout<<"Data of Employee "<<(i+1)<<endl;
	    	e[i].displaydata();
		}
	return 0;		
}
