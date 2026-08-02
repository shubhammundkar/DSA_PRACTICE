#include<iostream>
using namespace std;
int lastBinarySearch(int A[],int n,int x){
    int low=0,high=n-1,result=-1;
   
    while(low<=high){
         int mid=low+(high-low)/2;
        if(x==A[mid]){
            result=mid;
            low=mid+1;
        }
        else if(x<A[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}
int main(){
    int x;
    int A[]={2,3,3,3,3,4,5,6,6,9};
    cout<<"enter an element to find in array ";
    cin>>x;
    int n=sizeof(A)/sizeof(A[0]);
    int index=lastBinarySearch(A,n,x);
    if(index!=-1){
        cout<<x<<" found at index no "<<index;
    }
    else{
        cout<<x<<" not found ";
    }
    return 0;
}