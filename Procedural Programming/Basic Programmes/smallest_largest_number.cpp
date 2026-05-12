//smallest & largest number
/*
#include <iostream>
using namespace std;

int main()
{
    int num, small, large;

    cout << "Enter positive integers (0 to stop): ";
    cin >> num;

    if (num == 0)
    {
        cout << "No numbers entered";
        return 0;
    }

    small = large = num;

    while (true)
    {
        cin >> num;

        if (num == 0)
            break;

        if (num < small)
            small = num;

        if (num > large)
            large = num;
    }

    cout << "Smallest = " << small << endl;
    cout << "Largest = " << large << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int num, small, large;

    cout << "Enter positive integers (0 to stop): ";
    cin >> num;

    if (num == 0)
    {
        cout << "No numbers entered";
        return 0;
    }

    small = large = num;

    for(;;)   // infinite for loop
    {
        cin >> num;

        if (num == 0)
            break;

        if (num < small)
            small = num;

        if (num > large)
            large = num;
    }

    cout << "Smallest = " << small << endl;
    cout << "Largest = " << large << endl;

    return 0;
}
*/


#include <iostream>
using namespace std;

int main()
{
    int num, small, large;
    bool first = true;

    cout << "Enter positive integers (0 to stop): ";

    do
    {
        cin >> num;

        if (num == 0 && first)
        {
            cout << "No numbers entered";
            return 0;
        }

        if (num == 0)
            break;

        if (first)
        {
            small = large = num;
            first = false;
        }
        else
        {
            if (num < small)
                small = num;

            if (num > large)
                large = num;
        }

    } while (true);

    cout << "Smallest = " << small << endl;
    cout << "Largest = " << large << endl;

    return 0;
}



