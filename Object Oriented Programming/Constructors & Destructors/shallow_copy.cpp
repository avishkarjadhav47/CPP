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
};
int main()
{
	A a1(10);
	A a2=a1;
	cout<<*a1.p<<endl;
	cout<<*a2.p<<endl;
}
