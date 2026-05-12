#include<iostream>
using namespace std;

class complex
{
    private:
        int real, img;

    public:
        // Set data (no cin here)
        void setData(int r, int i)
        {
            real = r;
            img = i;
        }

        void display()
        {
            cout << real << " + " << img << "i" << endl;
        }

        // Multiply and return object
        complex multiply(complex c1, complex c2)
        {
            complex temp;

            temp.real = (c1.real * c2.real) - (c1.img * c2.img);
            temp.img  = (c1.real * c2.img) + (c1.img * c2.real);

            return temp;
        }
};

int main()
{
    complex c1, c2, c3;
    int r, i;

    cout << "Enter Complex Number 1 (real and imaginary): ";
    cin >> r >> i;
    c1.setData(r, i);

    cout << "Enter Complex Number 2 (real and imaginary): ";
    cin >> r >> i;
    c2.setData(r, i);

    c3 = c3.multiply(c1, c2);

    cout << "\nComplex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    cout << "\nMultiplication Result: ";
    c3.display();

    return 0;
}
