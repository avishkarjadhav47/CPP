#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
		complex(int x,int y)
		{
			r=x;i=y;
		}
		complex()
		{
			r=0;i=0;
		}
		void display()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}
		friend complex add(complex a,complex b);
};
complex add(complex a,complex b)
		{
			complex temp;
			temp.r=b.r+a.r;
			temp.i=b.i+a.i;
			return temp;
		}
int main()
{
	complex c1(3,4),c2(5,6),c3;
	c3=add(c1,c2);
	c3.display();
	return 0;
}
