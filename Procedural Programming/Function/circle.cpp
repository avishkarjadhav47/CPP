#include <iostream>
using namespace std;

// Declare
void circle(float r);

int main()
{
    float r;
    cin >> r;

    // Call for three circles
    circle(r);
    circle(r);
    circle(r);

    return 0;
}

// Define
void circle(float r)
{
    float pi = 3.14;
    cout << 2*r << " ";
    cout << 2*pi*r << " ";
    cout << pi*r*r << endl;
}

