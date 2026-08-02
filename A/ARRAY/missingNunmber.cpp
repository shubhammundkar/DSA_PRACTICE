#include<iostream>
using namespace std;
void missingNumber(int arr[],int n,int k){
    bool anyMissing = false;
    for(int i=1;i<=k;i++){
        bool found=false;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"Missing number is " << i << endl;
            anyMissing = true;
        }
    }
    if(!anyMissing)
        cout << "No missing number";
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
    cout<<"enter number : ";
    cin>>k;

    missingNumber(arr,n,k);
    return 0;
}