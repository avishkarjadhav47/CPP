#include<iostream>
using namespace std;
class Hello
{
	int a[10],n;float avg,total=0;
	public:
		void get()
		{
			cout<<"Enter Number of subjects:";cin>>n;
			cout<<"Enter marks:";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}	
		}
		void display()
		{
			cout<<"Enterd  marks are:";
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		void result()
		{
			for(int i=0;i<n;i++)
			{
				total+=a[i];
			}
			avg=total/n;
			cout<<"Total:"<<total<<endl;
			cout<<"Average:"<<avg<<endl;
		}
};
int main()
{
	int m;
	cout<<"Enter number of students:";cin>>m;
	Hello s[m];
	for(int i=0;i<m;i++)
	{
		cout<<"Result of student "<<i+1<<endl;
		s[i].get();
		s[i].result();
		s[i].display();
	}
	return 0;
}
