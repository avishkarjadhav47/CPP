//Volume & Surface Area of cylinder
#include <iostream>
using namespace std;

class Cylinder
{
private:
    int r, h;

public:
    void getdata()
    {
        cout << "Enter base radius and height: ";
        cin >> r >> h;
    }

    void display()
    {
        cout << "Base radius: " << r << endl;
        cout << "Height: " << h << endl;
    }

    void calculate()
    {
        double v, sa;
        const double PI = 3.141;

        v = PI * r * r * h;
        sa = 2 * PI * r * (h + r);

        cout << "Volume: " << v << endl;
        cout << "Surface Area: " << sa << endl;
    }
};

int main()
{
    Cylinder c1, c2;
    cout<<"Enter data for cylinder 1:"<<endl;
    c1.getdata();
    c1.display();
    c1.calculate();
    cout<<endl;
    cout<<"Enter data for cylinder 2:"<<endl;
    c2.getdata();
    c2.display();
    c2.calculate();

    return 0;
}
