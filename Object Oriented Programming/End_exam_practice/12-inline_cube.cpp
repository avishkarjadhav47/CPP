#include<iostream>
using namespace std;
class cube
{
	int x;
	public :
		int inline cu(int y)
		{
			x=y;
			return x*x*x;
		}
};
int main()
{int k;
	cube c;
	k=c.cu(3);
	cout<<k<<endl;
	return 0;
}
