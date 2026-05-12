#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		
		void get_a()
		{
			cout<<"Enter Value of a:";
			cin>>a;
		}
};
class B:public A
{
	public:
		int b;
		
		void get_b()
		{
			cout<<"Enter value of b:";
			cin>>b;
		}
};
class C: public B
{
	private:
		int c;
	public:
	    void get_c()
		{
			cout<<"Enter value of c:";
			cin>>c;
		}
		void sum()
		{
			int ans=a+b+c;
			cout<<"Sum="<<ans;
		}	
};
int main()
{
	C obj;
	obj.get_a();
	obj.get_b();
	obj.get_c();
	obj.sum();
	return 0;
}

