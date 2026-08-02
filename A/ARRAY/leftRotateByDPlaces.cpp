#include<iostream>

using namespace std;
void leftByD(int arr[], int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}


int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int k;
    cout<<"enter k: ";
    cin>>k;

    leftByD(arr,n,k);
}