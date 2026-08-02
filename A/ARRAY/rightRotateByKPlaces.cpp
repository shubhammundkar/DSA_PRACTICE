#include<iostream>

using namespace std;
void rightByD(int arr[], int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+1];
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
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

    rightByD(arr,n,k);
}