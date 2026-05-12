#include<iostream>
using namespace std;

class Distance
{
    int meter, centimeter;

public:
    void setdata(int m, int c)
    {
        meter = m;
        centimeter = c;   // corrected spelling
    }

    void display()
    {
        cout << meter << "m " << centimeter << "cm" << endl;
    }

    Distance add(Distance d1, Distance d2)
    {
        Distance temp;

        temp.centimeter = d1.centimeter + d2.centimeter;
        temp.meter = d1.meter + d2.meter;

        if(temp.centimeter >= 100)
        {
            temp.meter =temp.meter+temp.centimeter / 100;
            temp.centimeter = temp.centimeter % 100;
        }

        return temp;
    }
};

int main()
{
    Distance d1, d2, d3;
    int m, c;

    cout << "Enter first distance (meters and centimeters): ";
    cin >> m >> c;
    d1.setdata(m, c);

    cout << "Enter second distance (meters and centimeters): ";
    cin >> m >> c;
    d2.setdata(m, c);

    d3 = d3.add(d1, d2);

    cout << "\nFirst Distance: ";
    d1.display();

    cout << "Second Distance: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
