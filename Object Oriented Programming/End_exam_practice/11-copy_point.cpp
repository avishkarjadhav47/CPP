#include<iostream>
using namespace std;
class point
{int x,y;
   public:
   	point(int m,int n)
   	{
   		x=m;y=n;
	}
	point(const point &p)
	{
		x=p.x;
		y=p.y;
	}
	void display()
	{
		cout<<x<<","<<y<<endl;
	}
};
int main()
{
	point A(3,4);
	point B(A);
	B.display();
	return 0;
}
