#include<iostream>

using namespace std;
void unionSorted(int arr1[], int m,int arr2[],int n){
    for(int i=0;i<m;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                found = true ;
                break;
            }
        }
        if(!found)cout<<arr[i];
    }
}

int main(){
    int m;
    cin >> m;

    int arr1[m];
    for(int i=0; i<m; i++)
        cin >> arr1[i];

    int n;
    cin >> n;

    int arr2[n];
    for(int i=0; i<n; i++)
        cin >> arr2[i];

    unionSorted(arr1,m,arr2,n);
}