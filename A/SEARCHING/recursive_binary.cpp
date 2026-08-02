#include<iostream>
using namespace std;
int BinarySearch(int A[],int low,int high,int x){
    int mid=low+(high-low)/2;

    if(low>high)return -1;
    if(x==A[mid])return mid;
    else if(x<A[mid]) return BinarySearch(A,low ,mid-1,x);
    else if(x>A[mid]) return BinarySearch(A,mid+1 ,high,x);
    return -1;
}
int main(){
    int A[]={1,2,5,7,9};
    int x,n;
    cout<<"enter no ";
    cin>>x;
    n=sizeof(A)/sizeof(A[0]);
    int index=BinarySearch(A,0,n-1,x);
    if(index!=-1)cout<<x <<" is found at index no "<<index;
    else cout<<x<<" is not found  ";
    return 0;
}
