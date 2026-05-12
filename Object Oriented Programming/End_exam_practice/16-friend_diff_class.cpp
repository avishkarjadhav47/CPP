#include<iostream>
using namespace std;
class two;
class one
{
	int x,y;
	public:
		void get(int a,int b)
		{
			x=a;y=b;
		}
		friend void sum(one n,two w);
};
class two
{
	int x,y;
	public:
		void get(int a,int b)
		{
			x=a;y=b;
		}
		friend void sum(one n,two w);
};
void sum(one n,two w)
{
	cout<<n.x+w.x<<endl;
	cout<<n.y+w.y<<endl;
}
int main()
{
	one k;
	two l;
	l.get(3,4);
	k.get(3,4);
	sum(k,l);
	return 0;
}
