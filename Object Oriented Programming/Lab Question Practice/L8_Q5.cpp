#include<iostream>
using namespace std;
	    inline double add(int a,int b,int c)//Function-->Declare,Define,Call
	{
	 	return a+b+c;
	}
	inline double add(int a,int b,double c)
	{
	 	return a+b+c;
	}
	inline double add(int a,double b,int c)
	{
	 	return a+b+c;
	}
	inline double add(double a,int b,int c)
	{
	 	return a+b+c;
	}
	inline double add(double a,double b,double c)
	{
	 	return a+b+c;
	}
	inline double add(double a,double b,int c)
	{
	 	return a+b+c;
	}
	inline double add(double a,int b,double c)
	{
	 	return a+b+c;
	}
	inline double add(int a,double b,double c)
	{
	 	return a+b+c;
	}
int main()
{	
	cout<<add(3,4,5)<<endl;
	cout<<add(3,4,5.1)<<endl;
	cout<<add(3,4.1,5)<<endl;
	cout<<add(3.1,4,5)<<endl;
	cout<<add(3.1,4.1,5.1)<<endl;
	cout<<add(3.1,4.1,5)<<endl;
	cout<<add(3.1,4,5.1)<<endl;
	cout<<add(3,4.1,5.1)<<endl;
	return 0;	
}


