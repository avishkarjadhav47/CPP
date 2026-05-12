#include<iostream>
using namespace std;

class complex
{
private:
    float real, img;

public:

    void getdata(float r, float i)
    {
        real = r;
        img = i;
    }

    void sum(complex c1, complex c2)   // no return type
    {
        real = c1.real + c2.real;
        img  = c1.img + c2.img;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }
};

int main()
{
    complex c1, c2, c3;

    c1.getdata(2,3);
    c2.getdata(4,5);

    c3.sum(c1,c2);     // result stored in c3

    c3.display();

    return 0;
}
