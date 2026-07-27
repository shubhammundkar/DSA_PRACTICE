#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int k){
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<k<<"found at index no : "<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found)cout<<"not found ";
}
int main(){
    int n,k;
    cout<<"entter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter k: ";
    cin>>k;
    linearSearch(arr,n,k);
    return 0;
}