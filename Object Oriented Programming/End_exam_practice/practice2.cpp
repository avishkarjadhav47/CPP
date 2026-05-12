#include<iostream>
using namespace std;
class A
{
	public:
		void showA()
		{
			cout<<"Class A"<<endl;
		}
};
class B:public A
{
	public:
		void showB()
		{
			cout<<"Class B"<<endl;
		}
};
class C
{
	public:
		void showC()
		{
			cout<<"Class C"<<endl;
		}
};
class D:public B,public C
{
	public:
		void showD()
		{
			cout<<"Class D"<<endl;
		}
};
int main()
{
	D d1;
	d1.showA();d1.showB();d1.showC();d1.showD();
	return 0;
}


