#include <iostream>
#include <cmath>
using namespace std;

// Declare
void simple(float p, float r, float t);
void compound(float p, float r, float t);

int main()
{
    float p = 10000, r = 10.5, t = 5;
    int ch;
    cin >> ch;

    if(ch == 1)
        simple(p, r, t);
    else
        compound(p, r, t);

    return 0;
}

// Define
void simple(float p, float r, float t)
{
    float si = (p * r * t) / 100;
    cout << si;
}

void compound(float p, float r, float t)
{
    float ci = p * pow(1 + r/100, t) - p;
    cout << ci;
}

