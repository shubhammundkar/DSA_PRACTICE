#include<iostream>
using namespace std;
int checkSorted(int arr[],int n){
    bool check=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
            break;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter no of elemnts : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checkSorted(arr,n))cout<<"array is sorted ";
    else cout<<"not sorted";
    
    return 0;
}