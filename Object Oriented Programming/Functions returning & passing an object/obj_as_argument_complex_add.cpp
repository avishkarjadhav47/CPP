//Complex Addition (Object as argument to function)
#include<iostream>
#include<string>
using namespace std;

class ComplexNumber
{
	private:
	        int real,img;
	public:
		    void getData(int r,int i)
		         {
		         	real=r;
		         	img=i;
				 }
			 void display()
                 {
                    cout << real << " + " << img << "i" << endl;
                 } 
			void add(ComplexNumber c1,ComplexNumber c2)
			     {
			     	real=c1.real+c2.real;
			     	img=c1.img+c2.img;
				 }
};
int main()
{
	ComplexNumber c1,c2,c3;
	c1.getData(2,3);
	c2.getData(4,6);
	c3.add(c1,c2);
	cout<<"Complex Number 1:"<<endl;
	c1.display();
	cout<<"Complex Number 2:"<<endl;
	c2.display();
	cout<<endl;
	cout<<"Addition of two Complex Numbers is:"<<endl;
	c3.display();
	return 0;
}
