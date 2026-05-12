// Quick Sort without functions
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Entered array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Iterative Quick Sort
    int stack[n];
    int top = -1;

    stack[++top] = 0;
    stack[++top] = n - 1;

    while(top >= 0)
    {
        int high = stack[top--];
        int low = stack[top--];

        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++)
        {
            if(arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int p = i + 1;

        if(p - 1 > low)
        {
            stack[++top] = low;
            stack[++top] = p - 1;
        }

        if(p + 1 < high)
        {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }

    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

