// Binary Search-->Required Sorted array
#include <iostream>
using namespace std;

int main()
{
    int n, key, flag = 0;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements (sorted):\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Entered array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter key: ";
    cin >> key;

    int s = 0;
    int e = n - 1;

    while(s <= e)
    {
        int mid = (s + e) / 2;

        if(a[mid] == key)
        {
            cout << "Element found at index " << mid;
            flag = 1;
            break;
        }
        else if(key < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    if(flag == 0)
        cout << "Element not found";

    return 0;
}

