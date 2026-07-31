#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int  key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
     int arr[]={2,5,7,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout<<"sorted : ";
    for(int i=0 ;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}