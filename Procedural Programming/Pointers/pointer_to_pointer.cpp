// Pointer to Pointer
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Value in p (address of x): " << p << endl;
    cout << "Value at p: " << *p << endl;

    cout << "Value in pp (address of p): " << pp << endl;
    cout << "Value at **pp: " << **pp << endl;

    return 0;
}

