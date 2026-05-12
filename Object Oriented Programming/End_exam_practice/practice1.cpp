#include<iostream>
using namespace std;
class op
{
	int x;
	public:
		op(int y)
		{
			x=y;
		}
		op operator++()//pre
		{
			++x;
		}
		op operator++(int a)//post
		{
			x++;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
int main()
{
	op c(6);
	++c;
	c.display();
	c++;
	c.display();
}
