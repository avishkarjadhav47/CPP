#include<iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    void setData(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }

    // Give access to non-member function
    friend Complex multiply(Complex c1, Complex c2);
};

// Non-member function
Complex multiply(Complex c1, Complex c2)
{
    Complex temp;

    int realPart = (c1.real * c2.real) - (c1.img * c2.img);
    int imgPart  = (c1.real * c2.img) + (c1.img * c2.real);

    temp.setData(realPart, imgPart);

    return temp;   // returning object
}

int main()
{
    Complex c1, c2, c3;
    int r, i;

    cout << "Enter Complex Number 1 (real and imaginary): ";
    cin >> r >> i;
    c1.setData(r, i);

    cout << "Enter Complex Number 2 (real and imaginary): ";
    cin >> r >> i;
    c2.setData(r, i);

    c3 = multiply(c1, c2);   // calling non-member function

    cout << "\nComplex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    cout << "\nMultiplication Result: ";
    c3.display();

    return 0;
}
