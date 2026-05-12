//cmath library
#include <iostream>
#include <cmath>
using namespace std;

class square
{
private:
    double a;

public:
    void getdata()
    {
    	cout<<"Enter a number:"<<endl;
        cin >> a;
    }

    void cal_display()
    {
        cout << "Square root: " << sqrt(a) << endl;
        cout << "Square:" << pow(a, 2) << endl;
    }
};

int main()
{
    square s;
    s.getdata();
    s.cal_display();
    return 0;
}

