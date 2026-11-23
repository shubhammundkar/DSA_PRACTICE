#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr, int left, int mid, int right){
    vector<int> temp;
    int i = left;//pointer for left half 
    int j = mid+1;//pointer for right half 

    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);//push back smallest and increment 
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
   // If the right pile ran out first, dump the rest of the left pile into temp.
    while(i<=mid){
        temp.push_back(arr[i]);//
        i++;
    }
  //  If the left pile ran out first, dump the rest of the right pile into temp.
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }
  // 4. Copy temp back into arr
    for(int k=0;k<temp.size();k++){
        arr[left + k]=temp[k];
    }

}
void mergeSort(vector<int>& arr, int left, int right){
    if(left>=right) return;//stop

    int mid = left + (right- left)/2;

    mergeSort(arr,left,mid);//sort left half 
    mergeSort(arr,mid+1,right);//sort right half 
    merge(arr,left,mid,right);//merge both sorted halves 
}

int main() {
    vector<int> arr = {5, 1, 4, 2};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted: ";
    for (int x : arr) cout << x << " ";
    return 0;
}