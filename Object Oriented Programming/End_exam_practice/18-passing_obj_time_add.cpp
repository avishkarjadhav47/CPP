#include<iostream>
using namespace std;
class time
{
	int hr,min;
	public:
		time()
		{
			hr=0;min=0;
		}
		time(int h,int m)
		{
			hr=h;min=m;
		}
		void display()
		{
			cout<<hr<<" "<<min<<endl;
		}
		void add(time m1,time m2)
		{
			hr=m1.hr+m2.hr;
			min=m1.min+m2.min;
			if (min>=60)
			{
				hr=hr+(min/60);
				min=min%60;
			}
		}
};
int main()
{
	time t1(2,45),t2(3,30),t3;
	t3.add(t1,t2);
	t3.display();
	return 0;
}
