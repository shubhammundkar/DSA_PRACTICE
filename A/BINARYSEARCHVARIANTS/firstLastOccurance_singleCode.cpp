#include<iostream>
using namespace std;
int BinarySearch(int A[],int n,int x,bool searchFirst){
    int low=0,high=n-1,result=-1;
   
    while(low<=high){
         int mid=low+(high-low)/2;
        if(x==A[mid]){
            result=mid;
            if(searchFirst){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
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
    int first=BinarySearch(A,n,x,true);
    if(first==-1){
        cout<<"occurance of "<<x<<" is zero times";
    }
    else{
        int last=BinarySearch(A,n,x,false);
        cout<<"count of "<<x <<" is "<<last-first+1;
    }    
    return 0;
}