//admission eligibility
#include <iostream>
using namespace std;
int main()
{
    int m, p, c, total;

    cout << "Enter Maths marks: ";
    cin >> m;
    cout << "Enter Physics marks: ";
    cin >> p;
    cout << "Enter Chemistry marks: ";
    cin >> c;

    total = m + p + c;

    if (m >= 50 && p >= 50 && c >= 50 && total >= 180)
        cout << "Eligible for Admission";
    else
        cout << "Not Eligible for Admission";

    return 0;
}

