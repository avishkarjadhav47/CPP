// Merge Sort without functions
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

    // Iterative Merge Sort
    for(int size = 1; size < n; size = 2 * size)
    {
        for(int left = 0; left < n - 1; left += 2 * size)
        {
            int mid = min(left + size - 1, n - 1);
            int right = min(left + 2 * size - 1, n - 1);

            int n1 = mid - left + 1;
            int n2 = right - mid;

            int L[n1], R[n2];

            for(int i = 0; i < n1; i++)
                L[i] = arr[left + i];
            for(int j = 0; j < n2; j++)
                R[j] = arr[mid + 1 + j];

            int i = 0, j = 0, k = left;

            while(i < n1 && j < n2)
            {
                if(L[i] <= R[j])
                    arr[k++] = L[i++];
                else
                    arr[k++] = R[j++];
            }

            while(i < n1)
                arr[k++] = L[i++];

            while(j < n2)
                arr[k++] = R[j++];
        }
    }

    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

