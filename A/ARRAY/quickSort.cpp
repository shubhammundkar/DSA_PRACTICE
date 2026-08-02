#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high)
{
    // Choose first element as pivot
    int pivot = arr[low];

    int i = low;
    int j = high;

    while (i < j)
    {
        // Move i to the right until an element greater than pivot is found
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        // Move j to the left until an element smaller than or equal to pivot is found
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        // Swap if i and j have not crossed
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot in its correct position
    swap(arr[low], arr[j]);

    return j;
}

// Quick Sort Function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        // Sort left part
        quickSort(arr, low, pivotIndex - 1);

        // Sort right part
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[] = {7, 4, 1, 9, 3, 6, 2, 8, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}