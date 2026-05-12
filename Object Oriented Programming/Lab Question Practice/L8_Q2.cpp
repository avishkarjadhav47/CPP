#include<iostream>
using namespace std;
class Calculator
{
	private:
		int a,b;
	public:
	    void multiply(int a,int b);	
};
inline void Calculator:: multiply(int a,int b)
{
	cout<<"Product:"<<a*b<<endl;
}
int main()
{
	int k,d;
   Calculator c;
   cout<<"Enter two nums:";
   cin>>k>>d;
   c.multiply(k,d);
   return 0;	
}
