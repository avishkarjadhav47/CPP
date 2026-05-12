// Heap Sort without functions
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

    // Build Max Heap
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        int largest = i;
        while(true)
        {
            int left = 2 * largest + 1;
            int right = 2 * largest + 2;
            int maxIndex = largest;

            if(left < n && arr[left] > arr[maxIndex])
                maxIndex = left;
            if(right < n && arr[right] > arr[maxIndex])
                maxIndex = right;

            if(maxIndex == largest)
                break;

            swap(arr[largest], arr[maxIndex]);
            largest = maxIndex;
        }
    }

    // Heap Sort
    for(int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);

        int largest = 0;
        while(true)
        {
            int left = 2 * largest + 1;
            int right = 2 * largest + 2;
            int maxIndex = largest;

            if(left < i && arr[left] > arr[maxIndex])
                maxIndex = left;
            if(right < i && arr[right] > arr[maxIndex])
                maxIndex = right;

            if(maxIndex == largest)
                break;

            swap(arr[largest], arr[maxIndex]);
            largest = maxIndex;
        }
    }

    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

