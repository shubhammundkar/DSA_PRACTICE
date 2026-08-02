#include<iostream>
using namespace std;
int firstOccurance(int A[],int n,int x){
    int low=0,high=n-1,result=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(x==A[mid]){
            result=mid;
            high=mid-1;
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
int lastOccurance(int A[],int n,int x){
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
int countOccurance(int A[],int n,int x){
   int first=firstOccurance(A,n,x);
   int last=lastOccurance(A,n,x);
   if(first==-1)
    return 0;
   return last-first+1;
}

int main(){
     int x;
    int A[]={2,3,3,3,3,4,5,6,6,9};
    cout<<"enter an element to find in array ";
    cin>>x;
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"occurance of "<<x<<" is "<<countOccurance(A,n,x)<<" times in array";
    return 0;
}