//return object 
//You could still add numbers if values are hard-coded inside the function.
#include<iostream>
using namespace std;

class complex
{
private:
    float real, img;

public:

    complex getdata()   // returns object
    {
        complex temp;

        temp.real = 2;
        temp.img  = 3;

        return temp;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }
};

int main()
{
    complex c1;

    c1 = c1.getdata();   // only return, nothing passed

    c1.display();

    return 0;
}
