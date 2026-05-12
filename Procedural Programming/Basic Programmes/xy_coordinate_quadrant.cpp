#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
        cout << "First Quadrant";
    else if (x < 0 && y > 0)
        cout << "Second Quadrant";
    else if (x < 0 && y < 0)
        cout << "Third Quadrant";
    else if (x > 0 && y < 0)
        cout << "Fourth Quadrant";
    else if (x == 0 && y != 0)
        cout << "Point lies on Y-axis";
    else if (y == 0 && x != 0)
        cout << "Point lies on X-axis";
    else
        cout << "Point is at Origin";

    return 0;
}

