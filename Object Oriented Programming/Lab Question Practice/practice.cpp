#include<iostream>
using namespace std;
class c1
{
	public:
		virtual void display()
		{
			cout<<"In class c1"<<endl;
		}
};
class c11:public c1
{
	public:
		void display()
		{
			cout<<"In class c11"<<endl;
		}
};
class c12:public c1
{
	public:
		void display()
		{
			cout<<"In class c12"<<endl;
		}
};
int main()
{
	c1 *p;
	c11 o1;
	c12 o2;
	p=&o1;
	p->display();
	p=&o2;
	p->display();
	return 0;
}
