//pass+return
#include<iostream>
using namespace std;

class complex
{
private:
    float real,img;

public:

    void getdata(float r,float i)
    {
        real=r;
        img=i;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    friend complex sum(complex,complex);
};

complex sum(complex c1,complex c2)
{
    complex temp;

    temp.real = c1.real + c2.real;
    temp.img  = c1.img + c2.img;

    return temp;
}

int main()
{
    complex c1,c2,c3;
    float r,i;

    cout<<"Enter c1 real & imaginary part: ";
    cin>>r>>i;
    c1.getdata(r,i);

    cout<<"Enter c2 real & imaginary part: ";
    cin>>r>>i;
    c2.getdata(r,i);

    c3 = sum(c1,c2);

    cout<<"c1: ";
    c1.display();

    cout<<"c2: ";
    c2.display();

    cout<<"Addition: ";
    c3.display();

    return 0;
}
