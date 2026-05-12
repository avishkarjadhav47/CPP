#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,imag;
	public:
	    void getdata(int r,int i)
		{
			real=r;imag=i;
		}
		Complex multiply(Complex c)
		{
			Complex temp;
			temp.real=(real*c.real)-(imag*c.imag);
			temp.imag=(real*c.imag)+(c.real*imag);
			return temp;
		}
		void show()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}	
	
};
int main()
{
	Complex c1,c2,c3;
	c1.getdata(2,5);
	c2.getdata(3,-2);
	c3=c1.multiply(c2);
	c3.show();
	return 0;
}
