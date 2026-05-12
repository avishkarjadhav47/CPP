#include<iostream>
using namespace std;
class Complex
{  
		int real,imag;
	public:	
	    void getdata(int r,int i)
		{
			real=r;imag=i;
		}
		
		void show()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}	
	    friend Complex multiply(Complex c1,Complex c2);
};
Complex multiply(Complex c1,Complex c2)
		{
			Complex temp;
			int real=(c1.real*c2.real)-(c1.imag*c2.imag);
			int imag=(c1.real*c2.imag)+(c1.imag*c2.real);
			temp.getdata(real,imag);
			return temp;
		}
int main()
{
	Complex c1,c2,c3;
	c1.getdata(2,5);
	c2.getdata(3,-2);
	c3=multiply(c1,c2);
	c3.show();
	return 0;
}
