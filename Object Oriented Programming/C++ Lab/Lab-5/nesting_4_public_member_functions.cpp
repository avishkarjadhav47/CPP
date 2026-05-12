#include<iostream>
using namespace std;

class StudentResult
{
	float m1,m2,m3,total,avg;
	
	public:
		void getmarks()
		{
			cout<<"Enter Marks:";
			cin>>m1>>m2>>m3;
			totalmarks();
		}
		void totalmarks()
		{
			total=m1+m2+m3;
			cout<<"Total Marks:"<<total<<endl;
			avgmarks();
		}
		void avgmarks()
		{
			avg=total/3;
			cout<<"Average Marks:"<<avg<<endl;
			result();
		}
		void result()
		{
			if (avg>=75)
			{
				cout<<"Grade:Excellent";
			}
			else if (avg>50)
			{
				cout<<"Grade:Good";
			}
			else if (avg>35)
			{
			     cout<<"Grade:Satisfactory";	
			}
			else
			{
				cout<<"Need Improvement.";
			}
		}
};

int main()
{
	StudentResult s1;
    s1.getmarks();
    return 0;
}
