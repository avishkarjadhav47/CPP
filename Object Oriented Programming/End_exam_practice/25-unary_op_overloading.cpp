#include<iostream>
using namespace std;
class change
{
	public:
		int x;
		change(int a)
		{
			x=a;
		}
		void display()
		{
			cout<<x<<endl;
		}
		void operator-()
		{
			x=-x;
		}
};
int main()
{
	change c1(4);
	-c1;
	c1.display();
	return 0;
	
}
