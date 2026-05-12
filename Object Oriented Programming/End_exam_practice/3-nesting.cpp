#include<iostream>
using namespace std;
class nest
{int m1,m2,m3;float av;
  void total()
		{
			cout<<"total="<<(m1+m2+m3)<<endl;
		}
		void avg()
		{
			av=(m1+m2+m3)/3;
			cout<<"Average="<<av<<endl;;
		}
		void result()
		{
			if(av>=35)
			{
				cout<<"pass"<<endl;
			}
			else
			{
				cout<<"fail"<<endl;
			}
		}
	public:
		void get()
		{
			cout<<"Enter marks:";
			cin>>m1>>m2>>m3;
			total();
			avg();
			result();
		}
		
};
int main()
{
	nest s1;
	s1.get();
	return 0;
}
