#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,5,7,3};
    int x;
    cout<<"enter no ";
    cin>>x;
    int n=sizeof(A)/sizeof(A[0]);
    bool found=false;
    for(int i=0;i<n;i++){
        if(A[i]==x){
            cout<<x<<" found at index no "<<i;
            found=true;
            break;
        }
    }
    if(!found)cout<<x<<" is not present in array";
    return 0;
}
