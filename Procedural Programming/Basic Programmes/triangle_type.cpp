//triangle type
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 3 sides of triangle: ";
    cin >> a >> b >> c;

    // Triangle validity check
    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "Not a valid triangle";
    else if (a == b && b == c)
        cout << "Equilateral Triangle";
    else if (a == b || b == c || a == c)
        cout << "Isosceles Triangle";
    else
        cout << "Scalene Triangle";

    return 0;
}

