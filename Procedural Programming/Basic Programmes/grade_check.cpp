//grade check from marks
#include<iostream>
using namespace std;
int main()  
{
    float m;
    cout << "Enter marks: ";
    cin >> m;
    if (m <= 100 && m > 90)  //(a<=m<b) chained operation not supported in cpp
        cout << "S";
    else if (m <= 90 && m > 80)
        cout << "A";
    else if (m <= 80 && m > 70)
        cout << "B";
    else if (m <= 70 && m > 60)
        cout << "C";
    else if (m <= 60 && m >= 40)
        cout << "D";
    else if (m < 40 && m >= 0)
        cout << "E";
    else
        cout << "Not valid marks";

    return 0;
}

