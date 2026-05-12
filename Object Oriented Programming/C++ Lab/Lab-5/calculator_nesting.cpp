#include<iostream>
using namespace std;

class calculator
{
	private:
		int a,b;
		
		void add()
		{
			cout<<"Enter a & b:";
			cin>>a>>b;
			cout<<a<<"+"<<b<<"="<<(a+b)<<endl;
		    sub();
		}
		void sub()
		{
			cout<<a<<"-"<<b<<"="<<(a-b)<<endl;
		    mul();
		}
		void mul()
		{
			cout<<a<<"*"<<b<<"="<<(a*b)<<endl;
		    div();
		}
		void div()
		{
			cout<<a<<"/"<<b<<"="<<(a/b)<<endl;
		    mod();
		}
		void mod()
		{
			cout<<a<<"%"<<b<<"="<<(a%b)<<endl;
		}
	public:
	    void calculate()
		{
			cout<<"Operations are:"<<endl;
			add();
		}	
};

int main()
{
	calculator c1;
	c1.calculate();
	return 0;
}
