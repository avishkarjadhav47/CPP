//Overloading of Inline Function-add class-OOP's Programming
#include<iostream>
using namespace std;
class add
{
	
	public:
		inline int sum(int a,int b)
		{
	       return a+b;
	       
        }
        
        inline double sum(double c,double d)
		{
	       return c+d;
	       
        }
        inline float sum(float e,float f)
		{
	       return e+f;
	       
        }
        
		
};

int main()
{
	add p;
	cout<<"Integer sum="<<p.sum(3,4)<<endl;
	cout<<"Double sum="<<p.sum(3.58,4.53)<<endl;
	cout<<"Float sum="<<p.sum(3.58f,4.53f)<<endl;
	return 0;
}
