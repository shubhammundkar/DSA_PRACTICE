#include<iostream>
using namespace std;
int BinarySearch(int A[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]==x) return mid;
        if(x<A[mid]){
            high=mid-1;
        }
        else low=mid+1;
    }
    return -1;
    
}
int main(){
    int A[]={1,2,5,7,9};
    int x,n;
    cout<<"enter no ";
    cin>>x;
    n=sizeof(A)/sizeof(A[0]);
    int index=BinarySearch(A,n,x);
    if(index!=-1)cout<<x <<" is found at index no "<<index;
    else cout<<x<<" is not found  ";
    return 0;
}
