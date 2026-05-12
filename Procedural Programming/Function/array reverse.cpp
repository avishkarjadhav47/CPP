#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter " << i << " element: ";
        cin >> A[i];
    }

    cout << "\nOriginal array:\n";
    for(int i = 0; i < 10; i++)
        cout << A[i] << " ";

    for(int i = 0; i < 10; i++)
    {
        if(i < 5)
            B[i] = A[4 - i];
        else
            B[i] = A[14 - i];
    }

    cout << "\nReversed halves:\n";
    for(int i = 0; i < 10; i++)
        cout << B[i] << " ";

    return 0;
}

