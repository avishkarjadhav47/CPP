//gcd & lcm of 3 numbers #gcd(a,b,c)=gcd(gcd(a,b),c)  #lcm(a,b,c)=(a*b*c)/gcd(a*b)*gcd(gcd(a,b),c)
#include <iostream>
using namespace std;

// Function to find GCD of two numbers (Euclid)
int gcd_two(int x, int y)
{
    int dividend, divisor, remainder;

    if (x > y) {
        dividend = x;
        divisor = y;
    } else {
        dividend = y;
        divisor = x;
    }

    while (divisor != 0) {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return dividend;
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int gcd_ab = gcd_two(a, b);
    int gcd_abc = gcd_two(gcd_ab, c);

    int lcm_abc = (a * b * c) / (gcd_ab * gcd_abc);

    cout << "GCD = " << gcd_abc << endl;
    cout << "LCM = " << lcm_abc << endl;

    return 0;
}

