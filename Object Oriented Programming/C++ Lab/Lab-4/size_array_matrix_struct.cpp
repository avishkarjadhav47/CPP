#include <iostream>
using namespace std;

// Structure definitions
struct XYZ
{
    int x;
    double y;
    char z;
};

struct ZYX
{
    int x[10];
    float y;
    double z[5];
};

int main()
{
    // Linear arrays
    int A1[] = {12, 5, 200};
    float A2[] = {12.2, 5, 200.0};
    double C[] = {12.2, 5, 200.0};

    // Matrix 3x3
    int M[3][3];

    // Structure variables
    XYZ s1;
    ZYX s2;

    cout << "Size of int array A1 = " << sizeof(A1) << " bytes" << endl;
    cout << "Size of float array A2 = " << sizeof(A2) << " bytes" << endl;
    cout << "Size of double array C = " << sizeof(C) << " bytes" << endl;

    cout << "Size of 3x3 matrix = " << sizeof(M) << " bytes" << endl;

    cout << "Size of structure XYZ = " << sizeof(s1) << " bytes" << endl;
    cout << "Size of structure ZYX = " << sizeof(s2) << " bytes" << endl;

    return 0;
}

