#include <iostream>
#include <utility> // For swap

using namespace std;

// Changed parameters to accept a raw array and its size n
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        // Changed i++ to j++
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Changed arr[j] to arr[i]
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {2, 7, 4, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}