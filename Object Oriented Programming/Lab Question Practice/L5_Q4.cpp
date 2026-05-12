#include<iostream>
using namespace std;
class calculator
{
	int a,b;
	public:
		void sum(int x,int y)
		{
			a=x;b=y;
			cout<<"Sum="<<a+b<<endl;
			sub(x,y);//While Calling
		}
		void sub(int x,int y)//While Declare & Define
		{
			a=x;b=y;
			cout<<"Subtraction="<<a-b<<endl;
			mul(x,y);
		}
		void mul(int x,int y)
		{
			a=x;b=y;
			cout<<"Multiplication="<<a*b<<endl;
			div(x,y);
		}
		void div(int x,int y)
		{
			a=x;b=y;
			cout<<"Division="<<a/b<<endl;
			rem(x,y);
		}
		void rem(int x,int y)
		{
			a=x;b=y;
			cout<<"Remainder="<<a%b<<endl;
		}
};
int main()
{
	int k,l;
	cout<<"Enter Two Numbers Separated By Space:";
	cin>>k>>l;
	calculator c;
	c.sum(k,l);
	return 0;
}
