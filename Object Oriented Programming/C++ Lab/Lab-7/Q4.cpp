#include<iostream>
using namespace std;

class Rectangle
{
    float length, breadth,area,perimeter;

public:
    // Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void calculate()
    {
        area = length * breadth;
        perimeter = 2 * (length + breadth);

        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }
};

int main()
{
    float l, b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    // Constructor called here
     Rectangle r(l, b);

    r.calculate();

    return 0;
}
