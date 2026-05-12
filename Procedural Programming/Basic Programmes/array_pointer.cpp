#include<iostream>
using namespace std;

int main()
{
    int a[5] = {50, 60, 70, 80, 90}, i;
    int *p = a;

    cout << "Address of first element: " << p << endl;

    // Access using pointer arithmetic
    cout << "Elements using pointer:" << endl;
    for(i = 0; i <= 4; i++)
    {
        cout << *(p + i) << endl;
    }

    return 0;
}
