#include<iostream>
using namespace std;
class c1
{
	public:
		virtual void display()
		{
			cout<<"Hello i am c1"<<endl;
		}
};
class c11:public c1
{
	public:
		void display()
		{
			cout<<"Hello i am c11"<<endl;
		}
};
class c12:public c1
{
	public:
		void display()
		{
			cout<<"Hello i am c12"<<endl;
		}
};
int main()
{
	c1 *ptr;c11 a;c12 b;
	ptr=&a;
	ptr->display();
	ptr=&b;
	ptr->display();
}
