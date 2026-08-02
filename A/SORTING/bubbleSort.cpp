#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,7,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    bubblesort(arr,n);
    display(arr,n);
    return 0;
}