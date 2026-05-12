//passing
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

    friend void sum(complex c1,complex c2,complex &c3);
};

void sum(complex c1,complex c2,complex &c3)
{
    c3.real = c1.real + c2.real;
    c3.img  = c1.img + c2.img;
}

int main()
{
    complex c1,c2,c3;

    c1.getdata(2,3);
    c2.getdata(4,5);

    sum(c1,c2,c3);

    c3.display();

    return 0;
}
