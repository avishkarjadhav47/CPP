#include<iostream>
using namespace std;
class A
{
	public:
		int *p;
		
		A(int x)
		{
			p=new int;
			*p=x;
		}
		A(A &obj)
		{
			p=new int;
			*p=*(obj.p);
		}
		~A()
		{
			delete p;
			cout<<"p deleted successfully"<<endl;
		}
};
int main()
{
	A a1(10);
	A a2=a1;
	*(a2.p)=50;
	cout<<*a1.p<<endl;
	cout<<*a2.p<<endl;
	return 0;
}
