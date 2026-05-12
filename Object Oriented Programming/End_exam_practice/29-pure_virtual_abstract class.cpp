#include<iostream>
using namespace std;
class base
{
	public:
		virtual void draw()=0;
		virtual void area()=0;
};
class derived1:public base
{
	public:
		int r;
		derived1(int r)
		{
			this->r=r;
		}
		void draw()
		{
			cout<<"Draw Circle"<<endl;
		}
		void area()
		{
			cout<<3.14*r*r<<endl;
		}
};
int main()
{
	derived1 c(4);
	c.draw();
	c.area();
}
