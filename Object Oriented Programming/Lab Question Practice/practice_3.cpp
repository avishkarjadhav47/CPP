#include<iostream>
using namespace std;
class Students
{public:int *marks;
       void set(int n)
       {
       	  marks=new int[n];
       	  for(int i=0;i<n;i++)
       	  {
       	  	cin>>marks[i];
		  }
	   }
	   void show(int n)
       {
       	  for(int i=0;i<n;i++)
       	  {
       	  	cout<<marks[i]<<endl;
		  }
	   }
};
int main()
{
	Students s1;
	s1.set(5);
	s1.show(5);
	return 0;
}
