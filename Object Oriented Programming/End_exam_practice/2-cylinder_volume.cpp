#include<iostream>
using namespace std;
class cylinder
{
	private:
		int r,h;const float pi=3.14;
	public:
	    void set(int x,int y)
		{
			r=x;
			h=y;
		}
		void display()
		{
			cout<<pi*r*r*h<<endl;
			cout<<2*pi*r*(r+h);
		}	
};
int main()
{
	cylinder c1;
	c1.set(3,4);
	c1.display();
	return 0;
}
