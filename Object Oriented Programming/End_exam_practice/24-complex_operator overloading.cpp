#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
		complex()
		{
			r=0;i=0;
		}
		complex(int x,int y)
		{
			r=x;i=y;
		}
		void display()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}
		complex operator+(complex a)
		{
			complex temp;
			temp.r=r+a.r;
			temp.i=i+a.i;
			return temp;
		}
};
int main()
{
	complex c1(3,4),c2(5,6),c3;
	c3=c1+c2;
	c3.display();
	return 0;
}
