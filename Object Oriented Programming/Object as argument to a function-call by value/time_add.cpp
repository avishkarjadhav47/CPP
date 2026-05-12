//Object as argument to function-->Time Addition
#include<iostream>
using namespace std;
class time
{
	int hr,min;
	public:
		void settime(int h,int m)
		    {
		    	hr=h;
		    	min=m;
			}
		void displaytime()
		    {
		    	cout<<"Hours="<<hr<<" "<<"Minutes="<<min<<endl;
			}
		void add(time t1,time t2)
		    {
		    	min=t1.min+t2.min;
		    	hr=min/60;
		    	min=min%60;
		    	hr=hr+t1.min+t2.min;
			}		
};
int main()
{
	time T1,T2,T3;
	T1.settime(2,45);
	T2.settime(3,30);
	T3.add(T1,T2);
	cout<<"T1:";
	T1.displaytime();
	cout<<"T2:";
	T2.displaytime();
	cout<<"Add two times:"<<endl;
	cout<<"T3:";
	T3.displaytime();
	return 0;
}

