//Complex Addition user input (Object as argument to function)
#include<iostream>
#include<string>
using namespace std;

class ComplexNumber
{
	private:
	        int real,img;
	public:
		    void getData()
                 {
                    cout<<"Enter Real Part: ";
                    cin>>real;
                    cout<<"Enter Imaginary Part: ";
                    cin>>img;
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
	cout<<"Enter Complex Number 1:"<<endl;
	c1.getData();
	cout<<"Enter complex Number 2:"<<endl;
	c2.getData();
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
