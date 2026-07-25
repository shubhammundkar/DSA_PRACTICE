#include<iostream>
using namespace std;
void removeDuplicate(int arr[],int n){
    
    for(int i=0;i<n;i++){
        bool isDuplicate=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isDuplicate=true;
                break;
            }
        }
    if(!isDuplicate) cout<<arr[i]<<" ";
    }
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
    removeDuplicate(arr,n);
    return 0;
}