#include<iostream>
#include<utility>
#include<vector>
using namespace std;
void insertionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]  >arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    vector<int> arr={2,5,7,9,8};
    insertionSort(arr);
    cout<<"sorted : ";
    for(int i=0 ;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}