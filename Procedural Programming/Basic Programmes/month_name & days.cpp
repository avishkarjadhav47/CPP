//month name & days by month number
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month)
    {
        case 1:  cout << "January - 31 days"; break;
        case 2:  cout << "February - 28 or 29 days"; break;
        case 3:  cout << "March - 31 days"; break;
        case 4:  cout << "April - 30 days"; break;
        case 5:  cout << "May - 31 days"; break;
        case 6:  cout << "June - 30 days"; break;
        case 7:  cout << "July - 31 days"; break;
        case 8:  cout << "August - 31 days"; break;
        case 9:  cout << "September - 30 days"; break;
        case 10: cout << "October - 31 days"; break;
        case 11: cout << "November - 30 days"; break;
        case 12: cout << "December - 31 days"; break;
        default: cout << "Invalid month number";
    }

    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
    string months[] = {"January","February","March","April","May","June",
                       "July","August","September","October","November","December"};
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month < 1 || month > 12)
        cout << "Invalid month number";
    else
        cout << months[month-1] << " - " << days[month-1] << " days";

    return 0;
}
*/

