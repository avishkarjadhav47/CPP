#include<iostream>
using namespace std;
class len
{
	int m,cm;
	public:
		len()
		{
			m=0;cm=0;
		}
		len(int h,int g)
		{
			m=h;cm=g;
		}
		void display()
		{
			cout<<m<<" "<<cm<<endl;
		}
		void add(len m1,len m2)
		{
			m=m1.m+m2.m;
			cm=m1.cm+m2.cm;
			if (cm>=100)
			{
				m=m+(cm/100);
				cm=cm%60;
			}
		}
};
int main()
{
	len l1(5,45),l2(2,65),l3;
	l3.add(l1,l2);
	l3.display();
	return 0;
}
