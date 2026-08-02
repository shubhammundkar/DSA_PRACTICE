#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector<int> &arr,int x){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(x==arr[mid]) return mid;
        else if(x<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements for array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter elemnet to find in array: ";
    cin>>x;
    int index = binarySearch(arr,x);
    if(index!=-1)cout<<x<<" found at index "<<index;
    else cout<<x<<" not found ";
    return 0;
}