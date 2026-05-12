#include<iostream>
using namespace std;
class Number
{
	int x,y;
	public:
		void get(int a,int b)
		{
			x=a;y=b;
		}
		friend int sum(Number n);
};
int sum(Number n)
{
	return n.x+n.y;
}
int main()
{
	Number k;
	k.get(3,4);
	int h=sum(k);
	cout<<h<<endl;
	return 0;
}
