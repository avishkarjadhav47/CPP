// Selection Sort
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Selection sort logic
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

