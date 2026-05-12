//return 
#include<iostream>
using namespace std;

class complex
{
private:
    float real,img;

public:

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    friend complex getdata();
};

complex getdata()
{
    complex temp;

    temp.real = 2;
    temp.img  = 3;

    return temp;
}

int main()
{
    complex c1;

    c1 = getdata();

    c1.display();

    return 0;
}
