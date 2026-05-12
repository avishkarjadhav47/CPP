#include<iostream>
using namespace std;
class over
{
	public:
		inline double add(int x,int y,int z)
		{
			return x+y+z;
		}
		inline double add(int x,double y,int z)
		{
			return x+y+z;
		}
};
int main()
{int l,m;
	over w;
	l=w.add(2,3.5,5);
	m=w.add(2,2,2);
	cout<<l<<" "<<m<<endl;
	return 0;
}
