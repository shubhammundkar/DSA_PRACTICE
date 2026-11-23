#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// 1. Changed return type from void to int
int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;                    // 2. Increment i FIRST so it's a valid index
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[right]);   // 3 & 4. Swap with arr[i + 1] and arr[right]
    return i + 1;                   // 1. Return pivot's final index
}

void quickSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int p = partition(arr, left, right);
    quickSort(arr, left, p - 1);
    quickSort(arr, p + 1, right);
}

int main() {
    vector<int> arr = {5, 1, 4, 2};
    
    quickSort(arr, 0, arr.size() - 1);
    
    cout << "Sorted: ";
    for (int x : arr) cout << x << " ";
    return 0;
}
