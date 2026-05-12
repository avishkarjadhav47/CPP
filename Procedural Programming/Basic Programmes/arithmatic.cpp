#include <iostream>
using namespace std;
int main()
{
	int x=10;
	int y=11.5;
	int *p;
	p=&x;
	int *q;
	q=&y;
	x=*p+10;
	int z=2*(*q)+5;
	cout<<x<<" "<<z;
	return 0;
}
