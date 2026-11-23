#include<iostream>
#include<vector>
#include<utility>

using namespace std;
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)return;
    }
}

int main() {
    vector<int> numbers = {5, 1, 4, 2, 8};
    
    bubbleSort(numbers);
    
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}